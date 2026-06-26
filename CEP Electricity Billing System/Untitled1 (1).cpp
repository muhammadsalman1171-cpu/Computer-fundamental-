// Name: Muhammad Salman
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0748
// Section: 
#include <string>
using namespace std;

// Class to represent a customer
class Customer
{
public:
    string customerName;
    int customerID;
    int units;

    // Function to input customer data
    void inputData()
    {
        cout << "Enter Customer Name: ";
        cin >> customerName;

        cout << "Enter Customer ID: ";
        cin >> customerID;

        cout << "Enter Units Consumed: ";
        cin >> units;
    }

    // Function to display customer data
    void displayData()
    {
        cout << "\nCustomer Name : " << customerName;
        cout << "\nCustomer ID   : " << customerID;
        cout << "\nUnits Used    : " << units << endl;
    }
};

// Function to calculate electricity bill
void calculateBill(int units)
{
    float bill;

    if (units <= 100)
        bill = units * 10;
    else if (units <= 300)
        bill = (100 * 10) + ((units - 100) * 15);
    else
        bill = (100 * 10) + (200 * 15) + ((units - 300) * 20);

    cout << "Total Bill = Rs. " << bill << endl;
}

// Function to show consumption status
void billStatus(int units)
{
    if (units <= 100)
        cout << "Consumption Status: LOW\n";
    else if (units <= 300)
        cout << "Consumption Status: MODERATE\n";
    else
        cout << "Consumption Status: HIGH\n";
}

// Main Function
int main()
{
    Customer customers[4];
    int choice;

    do
    {
        cout << "\n================================";
        cout << "\n   ELECTRICITY BILLING SYSTEM";
        cout << "\n================================";
        cout << "\n1. Enter Customer Data";
        cout << "\n2. Display Customer Data";
        cout << "\n3. Calculate Electricity Bill";
        cout << "\n4. Check Consumption Status";
        cout << "\n5. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:

            for(int i = 0; i < 4; i++)
            {
                cout << "\nCustomer " << i + 1 << endl;
                customers[i].inputData();
            }
            break;

        case 2:

            cout << "\n------ Customer Records ------\n";

            for(int i = 0; i < 4; i++)
            {
                customers[i].displayData();
            }
            break;

        case 3:

            cout << "\n------ Electricity Bills ------\n";

            for(int i = 0; i < 4; i++)
            {
                cout << "\nCustomer: " << customers[i].customerName << endl;
                calculateBill(customers[i].units);
            }
            break;

        case 4:

            cout << "\n------ Consumption Status ------\n";

            for(int i = 0; i < 4; i++)
            {
                cout << "\nCustomer: " << customers[i].customerName << endl;
                billStatus(customers[i].units);
            }
            break;

        case 5:

            cout << "\nExiting Program...";
            break;

        default:

            cout << "\nInvalid Choice! Try Again.";
        }

    } while(choice != 5);

    return 0;
}
