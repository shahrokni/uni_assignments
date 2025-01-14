#include <iostream>
using namespace std;

void draw_static_square() {

  for (int j = 0; j < 15; j++) {
    for (int i = 0; i < 15; i++)
      cout << " * ";
    cout << "\n";
  }
}
