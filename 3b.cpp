// Description: This program asks the user for their age and then displays which generation they belong to.

#include <iostream>
#include <string>

using namespace std;

int main(){
    int age, birthAge;
    string generation;

    cout << "Enter your age" << endl;
    cin >> age;
    birthAge = 2025 - age;

    if (birthAge >= 2013) {
        generation = "Alpha";
    } else if (birthAge < 2012 && birthAge >= 1997) {
        generation = "Z";
    } else if (birthAge < 1996 && birthAge >= 1981) {
        generation = "Millenial";
    } else if (birthAge < 1980 && birthAge >= 1965) {
        generation = "X";
    } else if (birthAge < 1964 && birthAge >= 1946) {
        generation = "Baby Boomer";
    } else if (birthAge < 1945 && birthAge >= 1901) {
        generation = "Traditionalist";
    } else {
        generation = "you are too old";
    }



    cout << "You were born in " << birthAge << endl;
    cout << "You belong to the " << generation << " generation" << endl;

    return 0;
}