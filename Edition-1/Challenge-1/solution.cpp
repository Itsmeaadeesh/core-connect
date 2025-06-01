#include <iostream>
#include <algorithm>  // for std::reverse
using namespace std;

int main() {
    string s;

    // Ask the user to enter a string
    // User se string input lene ke liye
    cout << "Enter a string: ";
    getline(cin, s);  // Take the full line as input

    // Reverse the string using the reverse function
    // String ko ulta karne ke liye reverse function ka use kar rahe hain
    reverse(s.begin(), s.end());

    // Print the reversed string
    // Ulti hui string ko print karo
    cout << "Reversed string: " << s << endl;

    return 0;
}
