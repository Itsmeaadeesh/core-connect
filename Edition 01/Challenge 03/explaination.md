## 🔹 Challenge 3: Implement a Simple Calculator Using Classes (Advanced)

### 🧠 Problem:

Create a calculator using a **C++ class** that can perform:

* Addition
* Subtraction
* Multiplication
* Division
  Also, the calculator should support **chaining** operations like this:

```cpp
calc.add(5).subtract(3).multiply(2).result();
```

---

### 🔍 Approach:

* Make a class named `Calculator`.
* Use one variable `value` to store the result.
* Each function (add, subtract, etc.) will update `value` and return the object itself so that we can chain multiple operations.

---

### 🪜 Steps:

1. Define a class `Calculator` with a private variable `value`.
2. Create a constructor to set the starting value (default is 0).
3. Add functions for:

   * `add(x)` → value = value + x
   * `subtract(x)` → value = value - x
   * `multiply(x)` → value = value × x
   * `divide(x)` → check if x is not 0, then value = value ÷ x
4. Each function should return `*this` to allow chaining.
5. Add a `result()` function to print the final result.

---

### 🧠 Edge Case:

* If someone tries to divide by 0, show an error message and skip the operation.

---

### 💭 In Simple Words:

This is a clean and modern way to build a calculator using object-oriented programming.
By returning the same object from each function, we can do multiple operations in one line — this is called **method chaining**.

Example:

```cpp
Calculator calc(10);
calc.add(5).multiply(2).subtract(4).divide(2).result(); 
// Output: 11
```
\
