//2.
//Basic Function Declaration and Call
//▪ Declare a function called ”sayHello”that takes no parameters and returns
//  nothing.
//▪ Inside the function, display the message ”Hello, World!”.
//▪ Call the function from the main program to execute the greeting.

#include <iostream>
using namespace std;

// Function Declaration (Prototype)
void sayHello();

// Main Function
int main() {
    sayHello();   // function call
    return 0;
}

// Function Definition
void sayHello() {
    cout << "Hello, World!";
}