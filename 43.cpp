/*
    PROGRAM: 4a (smartCalculator)
    Written by Luis Ibarra
    Description: This program will ask the user for a pair of number and an operator then display the result.
    The program will keep going because it's in a true while loop.
    Last modified: 2/20/25

*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double num1, num2, result;
    char operat;

    cout << "Welcome to Luis' SmartCalculator!" << endl;
    cout << " " << endl;

    //start looping from here
    while (true){

        cout << "please input number 1" << endl;
        cin >> num1;
        cout << "please select an operator (+, -, *, /): " << endl;
        cin >> operat;
        cout << "please input number 2" << endl;
        cin >> num2;
        
        //compute the inputs using the switch operator
        switch(operat){
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                cout << " " << endl;
                cout << "Let's go again!" << endl;
                cout << " " << endl;
                break;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                cout << " " << endl;
                cout << "Let's go again!" << endl;
                cout << " " << endl;
                break;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                cout << " " << endl;
                cout << "Let's go again!" << endl;  
                cout << " " << endl; 
                break;
            case '/':
                if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
                else
                cout << "error: division by zero" << endl;
                break;
            default: 
                cout << "invalid operator" << endl;
        };
    }
    
    return 0;
}