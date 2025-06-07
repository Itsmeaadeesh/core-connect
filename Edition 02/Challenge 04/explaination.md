## 🔹 Challenge 4: Check for Palindrome (Basic)

### 🧠 Problem

Write a **C++ program** that checks if a given string is a **palindrome** — meaning it reads the same forward and backward.

📌 Example palindromes:  
`madam`, `racecar`, `121`

---

### 🔍 Approach

- Take input from the user.
- Reverse the string using C++ string methods.
- Compare the original and reversed strings.
- If both are the same, it's a palindrome.

---

### 🪜 Steps

1. Accept the string input using `cin`.
2. Use `string(str.rbegin(), str.rend())` to reverse the string.
3. Compare the original and reversed string:
   - If equal → It's a palindrome.
   - Else → Not a palindrome.
4. Output the result.

---

### 🧠 Edge Case

- The program is **case-sensitive**.  
  For example: `Madam` is **not** equal to `madaM`.  
  (You can convert the string to lowercase for case-insensitive checking.)

---

### 💭 In Simple Words

A **palindrome** is a word or number that looks the same when read backward.  
We reverse the input and compare it to the original string.


Example

Input:  madam
Output: Yes, it's a palindrome!

Input:  hello
Output: No, it's not a palindrome.