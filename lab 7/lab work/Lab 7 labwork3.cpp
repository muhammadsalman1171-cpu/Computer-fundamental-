#include <iostream>
using namespace std;

int main()
{
    // do integer arrays declare kiye: source aur destination
    // dono ka size 5 rakha gaya hai
    int source[5] = {5, 10, 15, 20, 25};  
    // source array ko kuch values se initialize kiya

    int destination[5];  
    // destination array banaya jisme values copy hongi

    // loop use karke source ke elements destination me copy kar rahe hain
    for(int i = 0; i < 5; i++)
    {
        destination[i] = source[i];  
        // source ka har element destination me copy ho raha hai
    }

    // source array ki values display karna
    cout << "Source Array:" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << source[i] << " ";
    }

    cout << endl;

    // destination array ki values display karna
    cout << "Destination Array:" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << destination[i] << " ";
    }

    return 0; // program ka successful end
}