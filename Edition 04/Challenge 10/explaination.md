# 📘 Explanation: Sum of Digits

To find the sum of digits of an integer:

### Steps:
1. Take the absolute value of the number (to ignore negative sign).
2. Use a loop to extract each digit:
   - Use `n % 10` to get the last digit.
   - Add it to a running sum.
   - Use `n /= 10` to remove the last digit.
3. Repeat until `n` becomes 0.

### Example:

Input: `-567`  
Absolute: `567`

- 567 % 10 = 7  
- 56 % 10 = 6  
- 5 % 10 = 5

Sum = 7 + 6 + 5 = **18**

### Time Complexity:
- O(d), where d = number of digits in the number.
