#include <iostream>
using namespace std;

int findTopper(int marks[], int size) {
    int maxIndex = 0;
    for (int i = 1; i < size; i++)
        if (marks[i] > marks[maxIndex])
            maxIndex = i;
    return maxIndex;
}

int main() {
    string names[5];
    int marks[5];

    cout << "Enter student names and marks:\n";
    for (int i = 0; i < 5; i++) {
        cin >> names[i];
        cin >> marks[i];
    }

    int topper = findTopper(marks, 5);

    cout << "Topper: " << names[topper] << endl;

    for (int i = 0; i < 5; i++) {
        if (marks[i] >= 50)
            cout << names[i] << " Pass\n";
        else
            cout << names[i] << " Fail\n";
    }

    return 0;
}