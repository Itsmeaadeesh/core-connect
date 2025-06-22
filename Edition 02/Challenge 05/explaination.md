# 📘 Explanation: Frequency Count of Elements

The task is to count how many times each element appears in the array.

### Approach:
1. Use a hash map (unordered_map in C++) to store each element as a key and its frequency as the value.
2. Iterate through the array:
   - For each element, increment its count in the map.
3. After the loop, iterate through the map and print the results.

### Why This Works:
- Hash maps provide constant time insertion and lookup on average.
- This ensures the solution runs efficiently even for 1000 elements.

### Time Complexity:
- **O(n)** for traversing the array once.
- **O(k)** for printing, where k is the number of unique elements.
