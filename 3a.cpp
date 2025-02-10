// Description: This program asks the user for a pair of number and an operator,
// then it performs the operation and displays the result.

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    double number1, number2, result;
    char operation;

    cout << "Enter the first number" << endl;
    cin >> number1;

    cout << "Enter the second number" << endl;
    cin >> number2;

    cout << "Enter the operation ( +, -, /, * )" << endl;
    cin >> operation;

    //operation = tolower(operation);
    

    // Perform the operation
    result = number1 + number2;

    cout << number1 << " " << operation << " " << number2 << " = " << endl;
    cout << "The result is: " << result << endl;

    return 0;
}