#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    unordered_map<int, int> freq;
    bool hasDuplicate = false;

    // Count frequencies
    for (int i = 0; i < n; ++i)
        freq[arr[i]]++;

    // Print elements with freq > 1
    for (auto &pair : freq) {
        if (pair.second > 1) {
            cout << pair.first << " ";
            hasDuplicate = true;
        }
    }

    if (!hasDuplicate)
        cout << "No duplicates";

    cout << endl;
    return 0;
}
