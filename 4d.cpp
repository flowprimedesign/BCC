
//2^n
// pow(2,n)


#include <iostream>
#include <cmath>

using namespace std;

int main(){

    //for loop is ideal because we know exactly how many times to loop.
    int height = 6;

    //this for loop creates the top half of the output. top 6 rows.
    for (int i=0; i < height; i++) {
        int stars = pow(2, i);
        for (int j=0; j < stars; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    //this for loop creates the bottom half of the output. bottom 7 rows.
    //starting from the top it creates and extra row because it goes to 0
    for (int i=height; i >= 0; i--) {
        int stars = pow(2, i);
        for (int j=0; j < stars; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}