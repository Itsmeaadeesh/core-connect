#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string reversed = string(str.rbegin(), str.rend());

    if (str == reversed) {
        cout << "Yes, it's a palindrome!" << endl;
    } else {
        cout << "No, it's not a palindrome." << endl;
    }

    return 0;
}
