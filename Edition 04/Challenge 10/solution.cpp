#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    n = abs(n); // Ignore sign
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    cout << sum << endl;

    return 0;
}
