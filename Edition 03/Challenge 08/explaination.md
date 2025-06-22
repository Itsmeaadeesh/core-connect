# 📘 Explanation: Reversing an Array In-Place

The goal is to reverse the elements of the array **without using another array**.

### Approach:
- Use two pointers: `start` (at beginning) and `end` (at end).
- Swap the elements at these positions.
- Move `start++` and `end--` until they meet.

This is called **two-pointer swapping**.

### Example:

Array: `[1, 2, 3, 4, 5]`  
Step-by-step:
- Swap arr[0] and arr[4] → `[5, 2, 3, 4, 1]`
- Swap arr[1] and arr[3] → `[5, 4, 3, 2, 1]`

Now array is reversed.

### Time Complexity:
- O(n), where n is the size of the array.

### Space Complexity:
- O(1) — no extra array used.
