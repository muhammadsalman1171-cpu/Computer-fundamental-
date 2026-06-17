#include <iostream>
using namespace std;

int totalLoad(int arr[]) {
    int sum = 0;
    for (int i = 0; i < 24; i++)
        sum += arr[i];
    return sum;
}

int peakLoad(int arr[]) {
    int maxVal = arr[0];
    for (int i = 0; i < 24; i++)
        if (arr[i] > maxVal)
            maxVal = arr[i];
    return maxVal;
}

int main() {
    int load[24];

    cout << "Enter 24 hourly loads:\n";
    for (int i = 0; i < 24; i++)
        cin >> load[i];

    cout << "Total Load: " << totalLoad(load) << endl;
    cout << "Peak Load: " << peakLoad(load) << endl;

    return 0;
}