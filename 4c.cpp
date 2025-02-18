/*

    output the multiplication table for 4 and 5.

*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int num1=4, num2=5, num, result;

    cout << "this will return the multiplication table for 4 and 5" << endl;
 
    //will use a for loop because we know the exact number of times to run the loop (10).
    for (num =1; num <=10; num++){
        result = num1 * num;
        cout << num1 << " * " << num << " = " << result << endl;
    }
    cout << " " << endl;
    //second identical loop for tables for 5
   for (num =1; num <=10; num++){
        result = num2 * num;
        cout << num2 << " * " << num << " = " << result << endl;
    }

    return 0;
}