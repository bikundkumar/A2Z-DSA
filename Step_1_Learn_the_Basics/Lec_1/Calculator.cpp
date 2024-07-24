#include <bits/stdc++.h>
using namespace std;

void Calculator(float a) {
    float b;
    char ch;

    while (true) {
        cout << "Enter operator (+, -, *, /) or 'q' to quit: ";
        cin >> ch;
        
        if (ch == 'q') {
            break;
        }

        cout << "Enter second number: ";
        cin >> b;

        if (ch == '+') {
            cout << a << " + " << b << " = " << a + b << endl;
        } else if (ch == '-') {
            cout << a << " - " << b << " = " << a - b << endl;
        } else if (ch == '*') {
            cout << a << " * " << b << " = " << a * b << endl;
        } else if (ch == '/') {
            if (b != 0) {
                cout << a << " / " << b << " = " << a / b << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
        } else {
            cout << "Invalid operator. Please try again." << endl;
        }
    }
}

int main() {
    float a;
    cout << "Enter first number: ";
    cin >> a;

    Calculator(a);

    return 0;
}

