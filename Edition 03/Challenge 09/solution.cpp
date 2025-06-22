#include <iostream>
#include <iomanip>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string holderName;
    float balance;

public:
    void input() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cin.ignore(); // Clear newline
        cout << "Enter Holder Name: ";
        getline(cin, holderName);
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit(float amount) {
        balance += amount;
    }

    void withdraw(float amount) {
        if (balance - amount >= 500) {
            balance -= amount;
        } else {
            cout << "⚠️  Withdrawal denied for account " << accountNumber << ". Minimum balance of ₹500 must be maintained.\n";
        }
    }

    void display() {
        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "Holder Name: " << holderName << endl;
        cout << "Balance: " << fixed << setprecision(2) << balance << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of accounts: ";
    cin >> n;

    BankAccount accounts[n];

    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for Account " << i + 1 << ":\n";
        accounts[i].input();

        float dep, wd;
        cout << "Enter deposit amount: ";
        cin >> dep;
        accounts[i].deposit(dep);

        cout << "Enter withdrawal amount: ";
        cin >> wd;
        accounts[i].withdraw(wd);
    }

    cout << "\n--- Final Account Details ---\n";
    for (int i = 0; i < n; ++i)
        accounts[i].display();

    return 0;
}
