## 🔹 Challenge 2: Find the Second Largest Number in an Array

### 🧠 Problem:
From an array of integers, find the second highest (second largest) number.

### 🔍 Approach:
- Loop once through the array.
- Track two variables:
  - `first` = sabse bada number
  - `second` = doosra sabse bada

### 🪜 Steps:
1. Initialize `first` and `second` with `INT_MIN`.
2. Loop through each element:
   - If number > first → update `second = first`, then `first = number`
   - Else if number > second and not equal to first → update `second`
3. Return `second`.

### 🧠 Edge Case:
- Agar array me same elements ho ya second largest na mile → throw error.

### 💭 Hinglish:
Sorting se bhi kar sakte the, lekin ye O(n) me ho jaata hai.  
Ek hi pass me dono value track karte hain – efficient approach hai.