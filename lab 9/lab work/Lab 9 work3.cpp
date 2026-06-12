//3.
//Write a C++ program that:
//Takes 10 integer values as input from the user and stores them in a 1D array. 
//Creates a function named calculateSum that: 
//Accepts the array and its size as parameters 
//Returns the sum of all elements 
//In the main() function: 
//Call the function 
//Calculate and display the average of the array elements 
//Constraints:
//Use only one-dimensional array 
//Use function for sum calculation

#include <iostream>
using namespace std;

// Function to calculate sum
int calculateSum(int arr[], int size) ;

int main() {
    int arr[10];
    
    // User se input lena
    cout << "Enter 10 numbers:\n";
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // Function call
    int total = calculateSum(arr, 10);

    // Average calculate karna
    float average = total / 10.0;

    // Output
    cout << "Sum = " << total << endl;
    cout << "Average = " << average << endl;

    return 0;
}

int calculateSum(int arr[], int size) {
    int sum = 0;
    
    for(int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    
    return sum;
}