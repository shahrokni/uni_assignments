#include <iostream>
using namespace std;

void draw_static_half_pyramid_while()
{
    int i = 0, j = 0;

    while (i < 12)
    {

        while (j < i + 1)
        {

            cout << " * ";
            j += 1;
        }

        cout << "\n";
        i += 1;
        j = 0;
    }
}
