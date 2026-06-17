#include <iostream>
using namespace std;

int main() {
    int att[5][7];
    int totalClass = 0;

    cout << "Enter attendance (5 students x 7 days):\n";

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 7; j++)
            cin >> att[i][j];

    int bestStudent = 0, maxAttend = 0;

    for (int i = 0; i < 5; i++) {
        int sum = 0;

        for (int j = 0; j < 7; j++) {
            sum += att[i][j];
            totalClass += att[i][j];
        }

        if (sum > maxAttend) {
            maxAttend = sum;
            bestStudent = i;
        }

        cout << "Student " << i + 1 << " Attendance: " << sum << endl;
    }

    cout << "Top Student: " << bestStudent + 1 << endl;
    cout << "Class Attendance %: " << (totalClass / 35.0) * 100 << "%" << endl;

    return 0;
}
