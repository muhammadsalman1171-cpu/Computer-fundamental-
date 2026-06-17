#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[5], temp;

    cout << "Enter 5 student names:\n";
    for (int i = 0; i < 5; i++)
        getline(cin, names[i]);

    // Sorting (Bubble sort)
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (names[i] > names[j]) {
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }

    cout << "Sorted names:\n";
    for (int i = 0; i < 5; i++)
        cout << names[i] << endl;

    return 0;
}