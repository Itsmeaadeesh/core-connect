# 📘 Explanation: Find Duplicates in an Array

The goal is to find elements that appear **more than once**.

### Approach:
1. Use a **hash map** (unordered_map) to store the frequency of each element.
2. Traverse the array once and update counts.
3. Traverse the map:
   - If an element's frequency is >1, print it.

### Why unordered_map?
- Provides O(1) average time for insert and lookup.

### Time Complexity:
- O(n), where n = size of the array.

### Space Complexity:
- O(n) — for storing frequencies.
