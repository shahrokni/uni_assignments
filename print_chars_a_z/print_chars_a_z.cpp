#include <iostream>
using namespace std;
void print_chars_a_z()
{
    char X;

    for (int i = 0; i < 27; i++)
    {
        X = 96 + i;
        cout << X;
        cout << " ";
    }
}