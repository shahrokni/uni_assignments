#include <iostream>
using namespace std;

void draw_static_half_pyramid_for()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {

            cout << " * ";
        }

        cout << "\n";
    }

}