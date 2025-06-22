#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    // Input
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    // Reverse in-place using two-pointer approach
    int start = 0, end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    // Output
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
