#include <iostream>
using namespace std;

int main()
{
    // integer type ka array "numbers" naam se declare kiya
    // iska size 5 rakha gaya hai
    int numbers[5] = {10, 20, 30, 40, 50};  
    // array ko 10,20,30,40,50 values se initialize kiya

    // loop use karke array ke tamam elements display karenge
    for(int i = 0; i < 5; i++)
    {
        // har index ki value print ho rahi hai
        cout << "Element at index " << i << " = " << numbers[i] << endl;
    }

    return 0; // program ka successful end
}