#include <iostream>
using namespace std;

// Function to reverse array
void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[5];

    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    cout << "Before reversal:\n";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    reverseArray(arr, 5);

    cout << "\nAfter reversal:\n";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}