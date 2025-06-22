#include <iostream>
#include <iomanip>
using namespace std;

class Student {
private:
    string name;
    int roll_number;
    float marks[5];

public:
    void inputDetails() {
        cout << "Enter name: ";
        cin.ignore(); // to handle newline before getline
        getline(cin, name);

        cout << "Enter roll number: ";
        cin >> roll_number;

        cout << "Enter marks for 5 subjects: ";
        for (int i = 0; i < 5; ++i)
            cin >> marks[i];
    }

    float calculatePercentage() {
        float sum = 0;
        for (int i = 0; i < 5; ++i)
            sum += marks[i];
        return sum / 5;
    }

    void displayDetails() {
        cout << "\nStudent: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; ++i)
            cout << marks[i] << " ";
        cout << endl;
        cout << fixed << setprecision(1);
        cout << "Percentage: " << calculatePercentage() << "%" << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for Student " << i + 1 << ":\n";
        students[i].inputDetails();
    }

    cout << "\n--- Student Results ---\n";
    for (int i = 0; i < n; ++i) {
        students[i].displayDetails();
    }

    return 0;
}
