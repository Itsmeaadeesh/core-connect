#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, original, reversed = 0;
    cin >> n;

    original = n;
    n = abs(n); // Handle negative numbers if needed

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    if (abs(original) == reversed)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}
