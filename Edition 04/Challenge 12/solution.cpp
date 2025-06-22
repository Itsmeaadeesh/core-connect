#include <iostream>
#include <iomanip>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    int marks[3];

public:
    void inputDetails() {
        cout << "Enter Name: ";
        cin.ignore(); // Clear newline
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter marks for 3 subjects: ";
        for (int i = 0; i < 3; ++i) {
            cin >> marks[i];
        }
    }

    float calculateAverage() {
        int total = 0;
        for (int i = 0; i < 3; ++i) {
            total += marks[i];
        }
        return total / 3.0;
    }

    char getGrade(float avg) {
        if (avg >= 90) return 'A';
        else if (avg >= 75) return 'B';
        else if (avg >= 50) return 'C';
        else return 'D';
    }

    void displayDetails() {
        float avg = calculateAverage();
        char grade = getGrade(avg);

        cout << "\nStudent: " << name << endl;
        cout << "Roll No.: " << rollNumber << endl;
        cout << "Marks: ";
        for (int i = 0; i < 3; ++i)
            cout << marks[i] << " ";
        cout << endl;
        cout << fixed << setprecision(2);
        cout << "Average: " << avg << endl;
        cout << "Grade: " << grade << endl;
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

    cout << "\n--- Report Cards ---\n";
    for (int i = 0; i < n; ++i) {
        students[i].displayDetails();
    }

    return 0;
}
