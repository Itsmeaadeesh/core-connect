#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Function to convert binary string to decimal
int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 0;

    // Process from right to left
    for (int i = binary.length() - 1; i >= 0; --i) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }

    return decimal;
}

int main() {
    string binary;
    cout << "Enter binary number: ";
    cin >> binary;

    int result = binaryToDecimal(binary);
    cout << result << endl;

    return 0;
}
