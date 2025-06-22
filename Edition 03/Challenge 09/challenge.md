# 🏦 Challenge 9: Bank Account Management System

## Problem Statement

Create a `BankAccount` class in C++ with the following attributes:
- `accountNumber` (int)
- `holderName` (string)
- `balance` (float)

Implement the following **member functions**:
1. `deposit()` — adds amount to balance.
2. `withdraw()` — subtracts amount from balance only if **minimum balance of ₹500** is maintained after withdrawal.
3. `display()` — shows account details.

The program should support **multiple accounts**, allowing the user to input, update, and display details.

### Input
- First line: Integer `n`, number of accounts.
- For each account:
  - Account number
  - Holder name
  - Initial balance

Then, for each account, perform:
- One deposit
- One withdrawal
(Both amounts are inputted by the user.)

### Output
- Display all account details after deposit and withdrawal.