#include <iostream>
using namespace std;
void draw_dynamic_square_for()
{
    int width, hight;
    cout << "Please enter the hight and width:\n";
    cin >> width >> hight;
    if (width > 0 && hight > 0)
    {
        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < hight; j++)
                cout << " * ";
            cout << "\n";
        }
    }
    else
    {
        cout << "Inputs are wrong!";
    }

}