#include<iostream>
using namespace std;

int main()
{   char calculator, Addition, Substraction, Division, Mutiplication;
    int num1 , num2  ;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> calculator;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;
        switch (calculator) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2;
                break;
            case '/':
                cout << num1 << " / " << num2 << " = " << num1 / num2;
                break;
            default:
            
            cout << "Error! The operator is not correct";
            break;
    }

    return 0;
}