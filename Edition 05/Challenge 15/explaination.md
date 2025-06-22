# 📘 Explanation: Hospital Patient Record System

This problem demonstrates how to apply **OOP concepts** like classes and objects to create a **simple hospital record management system**.

### Class Structure

```cpp
class Patient {
private:
    string name;
    int age;
    string symptoms;
    string doctor;

public:
    void input();
    void display();
};
