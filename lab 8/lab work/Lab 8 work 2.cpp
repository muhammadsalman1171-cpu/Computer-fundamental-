#include <iostream>
using namespace std;

int main()
{
    // 3x3 ka 2D array declare aur initialize kiya (random values)
    int matrix[3][3] = {
        {2, 4, 6},
        {1, 3, 5},
        {7, 8, 9}
    };

    int totalSum = 0;  
    // total sum store karne ke liye variable

    // Row sums calculate karna
    cout << "Sum of each row:" << endl;

    for(int i = 0; i < 3; i++)
    {
        int rowSum = 0;  
        // har row ka sum store karne ke liye

        for(int j = 0; j < 3; j++)
        {
            rowSum += matrix[i][j];  
            // row ka element sum me add ho raha hai

            totalSum += matrix[i][j];  
            // total sum bhi sath sath calculate ho raha hai
        }

        // har row ka sum print karna
        cout << "Row " << i << " Sum = " << rowSum << endl;
    }

    cout << endl;

    // Column sums calculate karna
    cout << "Sum of each column:" << endl;

    for(int j = 0; j < 3; j++)
    {
        int colSum = 0;  
        // har column ka sum store karne ke liye

        for(int i = 0; i < 3; i++)
        {
            colSum += matrix[i][j];  
            // column ka element sum me add ho raha hai
        }

        // har column ka sum print karna
        cout << "Column " << j << " Sum = " << colSum << endl;
    }

    cout << endl;

    // total sum display karna
    cout << "Total Sum of all elements = " << totalSum << endl;

    return 0; // program ka successful end
}