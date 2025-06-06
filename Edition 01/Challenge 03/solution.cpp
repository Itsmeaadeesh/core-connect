#include <iostream>
using namespace std;

class Calculator {
private:
    double value;

public:
    // Constructor to initialize the calculator with a value
    Calculator(double val = 0.0) {
        value = val;
    }

    // Member function for addition
    Calculator& add(double x) {
        value += x;
        return *this; // return current object for chaining
    }

    // Member function for subtraction
    Calculator& subtract(double x) {
        value -= x;
        return *this;
    }

    // Member function for multiplication
    Calculator& multiply(double x) {
        value *= x;
        return *this;
    }

    // Member function for division with check
    Calculator& divide(double x) {
        if (x != 0) {
            value /= x;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
        return *this;
    }

    // Function to display result
    void result() const {
        cout << "Result: " << value << endl;
    }
};

int main() {
    Calculator calc(10); // Start with initial value 10

    // Chaining operations
    calc.add(5).subtract(3).multiply(4).divide(2).result(); // Should output: 24

    return 0;
}
