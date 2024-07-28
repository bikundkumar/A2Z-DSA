#include <iostream>
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

        switch(ch) {
            case '+' : 
            cout << a << " + " << b << " = " << a + b << endl;
            break;

            case '-' : 
            cout << a << " - " << b << " = " << a - b << endl;
            break;

            case '*' :
            cout << a << " * " << b << " = " << a * b << endl;
            break;

            case '/' :
            if(b != 0) {
            cout << a << " / " << b << " = " << a / b << endl;
            } else {
                cout <<"Error: Division by zero is not allowed.\n"; 
            }
            break;
            default: 
            cout <<"Invalid operator. Please try again .\n"; 
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

