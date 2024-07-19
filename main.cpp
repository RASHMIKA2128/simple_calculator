#include <iostream>
using namespace std;

int main() {
    char op;
    float a, b;
    char choice;
    
    cout<<"BASIC CALCULATOR:-\n";

    do {
        cout << "Operation to be performed (+, -, *, /): ";
        cin >> op;

        cout << "Number 1: ";
        cin >> a;

        cout << "Number 2: ";
        cin >> b;

        switch(op) {
            case '+':
                cout << "Sum of the numbers is: " << a + b << endl;
                break;

            case '-':
                cout << "Difference of the numbers is: " << a - b << endl;
                break;

            case '*':
                cout << "Product of the numbers is: " << a * b << endl;
                break;

            case '/':
                if (b != 0) {
                    cout << "Quotient when numbers are divided is: " << a / b << endl;
                } else {
                    cout << "Error! Division by zero." << endl;
                }
                break;

            default:
                cout << "Error! Invalid operator." << endl;
        }

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;
    } while(choice == 'y' || choice == 'Y');

    return 0;
}
