#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int maxVal, minVal, sum = 0;

    // Input 10 integers
    cout << "Enter 10 integers:\n";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // Initialize max and min
    maxVal = minVal = arr[0];

    // Process array
    for (int i = 0; i < 10; i++) {
        sum += arr[i];

        if (arr[i] > maxVal)
            maxVal = arr[i];

        if (arr[i] < minVal)
            minVal = arr[i];
    }

    // Output results
    cout << "Maximum: " << maxVal << endl;
    cout << "Minimum: " << minVal << endl;
    cout << "Average: " << sum / 10.0 << endl;

    return 0;
}