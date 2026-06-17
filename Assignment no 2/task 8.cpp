#include <iostream>
using namespace std;

int main() {
    float voltage[20];
    int low = 0, high = 0;
    float maxV, minV;

    cout << "Enter 20 voltage readings:\n";
    for (int i = 0; i < 20; i++)
        cin >> voltage[i];

    maxV = minV = voltage[0];

    for (int i = 0; i < 20; i++) {
        if (voltage[i] < 3.0 || voltage[i] > 4.2)
            low++;

        if (voltage[i] > maxV)
            maxV = voltage[i];

        if (voltage[i] < minV)
            minV = voltage[i];
    }

    cout << "Max Voltage: " << maxV << endl;
    cout << "Min Voltage: " << minV << endl;

    if (low > 0)
        cout << "WARNING: Unsafe readings detected!\n";

    return 0;
}