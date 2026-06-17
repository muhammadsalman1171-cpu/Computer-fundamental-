#include <iostream>
using namespace std;

int main() {
    int grid[4][7];
    int total = 0;

    cout << "Enter consumption (4 regions x 7 days):\n";
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 7; j++)
            cin >> grid[i][j];

    // Total per region
    for (int i = 0; i < 4; i++) {
        int sum = 0;
        for (int j = 0; j < 7; j++) {
            sum += grid[i][j];
            total += grid[i][j];
        }
        cout << "Region " << i + 1 << " Total: " << sum << endl;
    }

    cout << "Overall Average: " << total / 28.0 << endl;

    return 0;
}