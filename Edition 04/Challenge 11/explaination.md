# 📘 Explanation: Palindrome Number Check

A number is a palindrome if it is the same when reversed.

### Steps:
1. Take input `n`.
2. Store the original number in a separate variable.
3. Reverse the number using a loop:
   - Extract digit using `n % 10`
   - Build reversed number using `rev = rev * 10 + digit`
4. Compare reversed number with the original:
   - If same → Palindrome
   - Else → Not Palindrome

### Example:

Input: `121`  
Reverse:  
- 1 → 12 → 121  
Reversed = 121 = Original → **Palindrome**

### Time Complexity:
- O(d), where d = number of digits
