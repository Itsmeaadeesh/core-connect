// Challenge 1: Reverse a String (Basic)
// Write a program that takes a string input and outputs the reversed string.

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string reverseString(const string& input) {
    string reversed = input;
    reverse(reversed.begin(), reversed.end());  // STL reverse function
    return reversed;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Reversed string: " << reverseString(str) << endl;
    return 0;
}
