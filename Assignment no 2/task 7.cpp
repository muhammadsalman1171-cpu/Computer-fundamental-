#include <iostream>
using namespace std;

int totalEnergy(int arr[]) {
    int sum = 0;
    for (int i = 0; i < 24; i++)
        sum += arr[i];
    return sum;
}

int maxHour(int arr[]) {
    int maxIndex = 0;
    for (int i = 1; i < 24; i++)
        if (arr[i] > arr[maxIndex])
            maxIndex = i;
    return maxIndex;
}

int main() {
    int energy[24];

    cout << "Enter energy data:\n";
    for (int i = 0; i < 24; i++)
        cin >> energy[i];

    cout << "Total Energy: " << totalEnergy(energy) << endl;
    cout << "Peak Hour: " << maxHour(energy) << endl;

    return 0;
}