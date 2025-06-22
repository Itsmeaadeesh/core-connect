# 📘 Explanation: Student Management System using Classes

This problem uses **Object-Oriented Programming (OOP)** to manage student data.

### Class Structure

```cpp
class Student {
private:
    string name;
    int roll_number;
    float marks[5];

public:
    void inputDetails();
    float calculatePercentage();
    void displayDetails();
};
