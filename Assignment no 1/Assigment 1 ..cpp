        // Name : Muhammad salman
        // Regisration No : 748
        // Section : A (electrical power)

#include <iostream>
using namespace std;

int main()
{
    // PART 1: Basic operations

    double voltage, current, resistance;

    cout << "2. Welcome to Object Oriented Programming in C++!" << endl;

    int age;
    cout << "3. Enter age: ";
    cin >> age;

    double temperature;
    cout << "4. Enter temperature: ";
    cin >> temperature;
    if (temperature > 100)
        cout << "Overheating detected!" << endl;

    double r, area;
    cout << "5. Enter radius: ";
    cin >> r;
    area = 3.14159 * r * r;
    cout << "Area = " << area << endl;

    int x = 10, y = 20, z = 30;
    cout << "6. " << x << ", " << y << ", " << z << endl;

    cout << "7. Enter voltage and current: ";
    cin >> voltage >> current;
    double total = voltage + current;
    cout << "Total = " << total << endl;

    int denominator;
    cout << "8. Enter denominator: ";
    cin >> denominator;
    if (denominator == 0)
        cout << "Error: Division by zero" << endl;

    int count = 5;
    cout << "9. New count = " << ++count << endl;

    float a, b, c;
    cout << "10. Enter three numbers: ";
    cin >> a >> b >> c;

    double R1, R2, R3;

    cout << "11. Enter three resistances: ";
    cin >> R1 >> R2 >> R3;
    cout << "Total Series Resistance = " << R1 + R2 + R3 << endl;

    cout << "12. Enter three resistances: ";
    cin >> R1 >> R2 >> R3;
    cout << "Total Parallel Resistance = "
         << 1 / ((1 / R1) + (1 / R2) + (1 / R3)) << endl;

    R1 = 4;
    R2 = 6;
    voltage = 10;
    cout << "13. Voltage across R2 = "
         << (voltage * R2) / (R1 + R2) << " V" << endl;

    R1 = 4;
    R2 = 6;
    voltage = 12;
    double Itotal = voltage / ((R1 * R2) / (R1 + R2));
    cout << "14. Current through R2 = "
         << Itotal * (R1 / (R1 + R2)) << " A" << endl;


    // PART 2: GPA CALCULATION

    int n;
    float credit[50], grade[50];
    float totalCredits = 0, totalPoints = 0;

    cout << "\nEnter number of subjects: ";
    cin >> n;

    cout << "Enter credit hours and grade points:\n";

    for(int i = 0; i < n; i++) {
        cout << "Subject " << i + 1 << " credit hours: ";
        cin >> credit[i];

        cout << "Subject " << i + 1 << " grade points: ";
        cin >> grade[i];

        totalCredits += credit[i];
        totalPoints += credit[i] * grade[i];
    }

    float gpa = totalPoints / totalCredits;

    cout << "\nSemester GPA = " << gpa << endl;

    return 0;
}
