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

    for (int i = 0; i < n; ++i)
        freq[arr[i]]++;

    for (auto& pair : freq)
        cout << pair.first << " -> " << pair.second << endl;

    return 0;
}
