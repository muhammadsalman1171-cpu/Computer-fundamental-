#include <iostream>
using namespace std;

int main()
{
    // 3x3 ka 2D integer array "matrix" declare kiya
    // aur isko 1 se 9 tak values se initialize kiya
    int matrix[3][3] = {
        {1, 2, 3},   // row 0
        {4, 5, 6},   // row 1
        {7, 8, 9}    // row 2
    };

    // nested loops use karke array ke elements display karna
    // outer loop rows ke liye hai
    for(int i = 0; i < 3; i++)
    {
        // inner loop columns ke liye hai
        for(int j = 0; j < 3; j++)
        {
            // har element print ho raha hai
            cout << matrix[i][j] << " ";
        }

        // har row ke baad next line me jana
        cout << endl;
    }

    return 0; // program ka successful end
}