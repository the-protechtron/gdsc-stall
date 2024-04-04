#include <iostream>

using namespace std;

int main() {
    float num1, num2, result;
    char operation;

    cout << "Enter two numbers: ";
    if (!(cin >> num1 >> num2)) {
        cout << "Invalid input!" << endl;
        return 0;
    }

    cout << "Select operation (+, -, *, /): ";
    if (!(cin >> operation)) {
        cout << "Invalid operation!" << endl;
        return 0;
    }

    switch(operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                result = num1 / num2;
            else {
                cout << "Cannot divide by zero!" << endl;
                return 0;
            }
            break;
        default:
            cout << "Invalid operation!" << endl;
            return 0;
    }

    cout << "Result: " << result << endl;

    return 0;
}
