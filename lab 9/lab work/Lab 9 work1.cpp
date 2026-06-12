//1. 
//Function Introduction and Declaration
//• Declare a function called”greet”that takes no parameters and returns
//  nothing.
//• Inside the function, display a greeting message of your choice.
//• Call the function from the main program to execute the greeting

#include <iostream>
using namespace std;

// Function Declaration (Prototype)
void greet();

// Main Function
int main() {
    greet();   // function call
    return 0;
}

// Function Definition
void greet() {
    cout << "Assalam o Alaikum! Welcome to C++ Functions.";
}