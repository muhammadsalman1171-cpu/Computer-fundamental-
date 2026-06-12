#include <iostream>
using namespace std;

int main()
{
    // 4x4 ka 2D integer array declare aur initialize kiya (random values)
    int arr[4][4] = {
        {12, 45, 7, 23},
        {34, 56, 18, 9},
        {67, 2, 89, 41},
        {5, 77, 29, 60}
    };

    // maximum value store karne ke liye variable
    // pehle element ko max maan liya
    int max = arr[0][0];

    // nested loops use karke poora array check karenge
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            // agar current element max se bara ho
            if(arr[i][j] > max)
            {
                max = arr[i][j];  
                // naya maximum update kar diya
            }
        }
    }

    // maximum value display karna
    cout << "Maximum value in the array = " << max << endl;

    return 0; // program ka successful end
}