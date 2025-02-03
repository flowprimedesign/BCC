/*
    PROGRAM: Assignment 2a (main.cpp)
    Written by Luis Ibarra
    This program prompts the user for radius and height 
    then outputs volume + surface area of a cone and cylinder
    Last modified: 2/3/2025

    use formulas:
        cylinder(volume)= pi*  pow(r,2) * h
        cylinder(surface area): 2 * pi * r * (r + h)
        cone(volume)= (1/3) * pi * pow(r,2) * h
*/

#include <iostream>                     //for input via cin
#include <cmath>                        //for operator like pow

using namespace std;                    //to avoid std:: syntax

int main() {                            //start of function

    //initialize variable as double because of math operations
    double radius, height, volumeCylinder, volumeCone, sAreaCylinder;

    //instructions for user input
    cout << "Hi! this program will output the Surface Area and Volume of a Cylinder" << endl;      //msg to console
    cout << "as well as the Volume of a Cone with the same radius and height." << endl;
    cout << " " << endl;
    cout << "please type the radius (r) followed by the height (h)" << endl; 
    
    //user input into keyboard
    cin >> radius >> height;
    
    //maths
    volumeCylinder = (3.1415 * pow(radius, 2)) * height;
    sAreaCylinder = 2 * 3.1415 * radius * (pow(radius, 2) + height);

    volumeCone = (0.3333) * 3.1415 * pow(radius, 2) * height;
    
    //output results
    cout << "  "<< endl;
    cout << "The volume of the cylinder is " << volumeCylinder << " cubic units" << endl;   
    cout << "The surface area of the cylinder is " << sAreaCylinder << " square units" << endl; 
    cout << "  "<< endl;
    cout << "The volume of the cone is " << volumeCone << " cubic units" << endl;                               

    return 0;                           //end the program
}