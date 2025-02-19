/*
    PROGRAM: 4b
    Written by Luis Ibarra
    Description: enter two numbers, this program computes multiplication by addition of the second number.
    Last modified: 2/20/25
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    // initialize number at 1 to start loop, loop will continue for the number of numerator, and will output base.
    int number=1, numerator, base;

    cout << "Welcome! please input 2 numbers and you'll see their multiplication by addition" << endl;
    cout << "please input num1" << endl;
    cin >> numerator;
    cout << "please input num2" << endl;
    cin >> base;

    //math
    //figure out a way to show base the number of times of numerator

    while (number <= numerator) {
        cout << base;
        number++;
    }
    cout << "\nThat's all!\n";
   

    return 0;
}