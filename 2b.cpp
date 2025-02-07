/*
    PROGRAM: Assignment 2b (main.cpp)
    Written by Luis Ibarra
    This program directs a cashier on how much change to give back and correct denomination 
    Last modified: 2/6/2025 
*/

#include <iostream>                                                                          //for input via cin

using namespace std;                                                                         //to avoid std:: syntax

int main() {                                                                                 //start of function

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

    //to get the remaining cents with new variable
    // add the 0.5 to round up to the nearest cent
    int remainingCents = ((amountToReturn - static_cast<int>(amountToReturn)) * 100) + 0.5;

    dollars = static_cast<int>(amountToReturn);
    quarters = remainingCents / 25;

    //update remaining cents
    remainingCents %= 25;
    dimes = remainingCents / 10;

    //update remaining cents
    remainingCents %= 10;
    nickels = remainingCents / 5;

    //update remaining cents
    remainingCents %= 5;
    pennies = remainingCents;

    //output results
    cout << "The amount to return is: " << amountToReturn << " USD." << endl;
    cout << "broken down by denomination: " << endl;
    cout << "Dollars: " << dollars << endl;  
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl; 
    cout << "Pennies: " << pennies << endl; 
    cout << "  "<< endl;

    return 0;                                                                                //end the program
}