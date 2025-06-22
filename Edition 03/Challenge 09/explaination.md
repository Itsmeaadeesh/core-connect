# 📘 Explanation: Bank Account System Using Classes

We are designing a basic banking system using C++ OOP concepts.

### Class Definition

```cpp
class BankAccount {
private:
    int accountNumber;
    string holderName;
    float balance;

public:
    void input();
    void deposit(float amount);
    void withdraw(float amount);
    void display();
};
