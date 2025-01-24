#include <iostream>
using namespace std;

void check_lowercase_uppercase() {
  char input;

  cout << "Please enter a character:\n";
  cin >> input;

  if (input >= 'a' && input <= 'z') {
    cout << "Lowercase!";
  } else {
    if (input >= 'A' && input <= 'Z') {
      cout << "Uppercase!";
    } else {
      cout << "Not recognize!\a";
    }
  }
}
