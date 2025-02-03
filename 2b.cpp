/*
    PROGRAM: Assignment 2b (main.cpp)
    Written by Luis Ibarra
    This program directs a cashier on how much change to give back and correct denomination 
    Last modified: 2/3/2025 
*/

#include <iostream>                     //for input via cin

using namespace std;                    //to avoid std:: syntax

int main() {                            //start of function

    //initialize variable as double because of math operations
    double amountReceived, amountDue, amountToReturn;
    int dollars, quarters, dimes, nickels, pennies;


    //instructions for user input
    cout << "Hi! I will help you calculate and figure out which coins to return" << endl;      //msg to console
    cout << " " << endl;
    cout << "please enter the amount of USD received " << endl; 
    //user input into keyboard
    cin >> amountReceived;
    cout << " " << endl;

    cout << "please enter the amount of USD to subtract " << endl;
    cin >> amountDue;
    cout << " " << endl;

    //maths
    amountToReturn = amountReceived - amountDue;
    dollars = amountToReturn;
    quarters = (amountToReturn - dollars) * 100 / 25;
    dimes = (amountToReturn - dollars) - (quarters * .25) / 10;
    nickels = ((amountToReturn - dollars) - (quarters * .25) - (dimes * .1)) * 100 / 5;
    pennies = ((amountToReturn - dollars) - (quarters * .25) - (dimes * .1) - (nickels * .05)) * 100 / 1;
    
    //output results
    cout << "The amount to return is: " << amountToReturn << endl;
    cout << "broken down by denomination: " << endl;
    cout << "Dollars: " << dollars << endl;  
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl; 
    cout << "Pennies: " << pennies << endl; 
    cout << "  "<< endl;

    return 0;                           //end the program
}