#include <iostream>
using namespace std;

int main()
{
    // character array "message" declare kiya
    // isme aik word store kiya gaya hai
    char message[] = "HELLO";

    // loop use karke har character ko access karenge
    // '\0' ka matlab string ka end hota hai
    for(int i = 0; message[i] != '\0'; i++)
    {
        // har character ko alag line me print kar rahe hain
        cout << message[i] << endl;
    }

    return 0; // program ka successful end
}