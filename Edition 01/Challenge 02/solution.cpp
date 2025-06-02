// Find the Second Largest Number in an Array (Intermediate)

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int findSecondLargest(const vector<int>& nums) {
    int first = INT_MIN, second = INT_MIN;

    for (int num : nums) {
        if (num > first) {
            second = first;
            first = num;
        } else if (num > second && num != first) {
            second = num;
        }
    }

    if (second == INT_MIN) {
        throw runtime_error("No second largest element found.");
    }
    return second;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    try {
        int secondLargest = findSecondLargest(arr);
        cout << "Second largest number: " << secondLargest << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}
