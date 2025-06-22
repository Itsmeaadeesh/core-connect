#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
    string name;
    int age;
    string symptoms;
    string doctor;

public:
    void input() {
        cin.ignore(); // Clear newline before getline
        cout << "Enter Patient Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
        cout << "Enter Symptoms: ";
        getline(cin, symptoms);
        cout << "Enter Assigned Doctor: ";
        getline(cin, doctor);
    }

    void display() {
        cout << "\nPatient Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Symptoms: " << symptoms << endl;
        cout << "Assigned Doctor: " << doctor << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of patients: ";
    cin >> n;

    Patient patients[n];

    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for Patient " << i + 1 << ":\n";
        patients[i].input();
    }

    cout << "\n--- Patient Records ---\n";
    for (int i = 0; i < n; ++i) {
        patients[i].display();
    }

    return 0;
}
