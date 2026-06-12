//1.
//. Function with Parameters
//▪ Declare a function called ”multiply” that takes two integer
//parameters:”num1”and”num2”.
//▪ Inside the function, calculate the product of the two
//numbers.
//▪ Display the result within the function.
//▪ Call the function from the main program, passing two numbers, to perform 
//the multiplication

#include <iostream>
using namespace std;

// Function ab value return karega
int multiply(int num1, int num2) {
    
    int product = num1 * num2;
    return product;   // value wapas bhej di
}

int main() {
    
    int result1 = multiply(5, 4); 
    cout << "The product is: " << result1 << endl;

    int result2 = multiply(10, 3);
    cout << "The product is: " << result2 << endl;

    return 0;
}