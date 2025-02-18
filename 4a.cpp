/*
    4a (smartCalculator)
    This program is written by Luis Ibarra
    Description: This program will ask the user for a pair of number and an operator then display the result.
        The program will keep asking the user for input until the user decides to quit.
    Last modified: 2/16/25

*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double num1, num2, result;
    char operat, doAgain;

    cout << "Welcome to Luis' SmartCalculator!" << endl;

    //start looping from here
    //use do-while loop. repeating menu
    do {
        cout << "please input num1" << endl;
        cin >> num1;
        cout << "please select an operator (+, -, *, /): " << endl;
        cin >> operat;
        cout << "please input num2" << endl;
        cin >> num2;
        
        //compute the inputs using the switch operator
        switch(operat){
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
                else
                cout << "error: division by zero" << endl;
                break;
            default: 
                cout << "invalid operator" << endl;
        }
        
        //ask user if they want to restart or stop
        cout << "go again? (y/n)\n";
        cin >> doAgain;
         cout << " " << endl;

    } while (doAgain == 'y');
    

    return 0;
}