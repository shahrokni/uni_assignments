#include <iostream>
using namespace std;

void Lowercase_Uppercase()
{
    char K;

    cout << "Please enter a character:\n";
    cin >> K;

    if ((int)K > 96 && (int)K < 123)
    {
        cout << "Lowercase!";
    }
    else
    {
        if ((int)K > 64 && (int)K < 91)
        {
            cout << "Uppercase!";
        }
        else
        {
            cout << "Not recognize!\a";
        }
    }
}
