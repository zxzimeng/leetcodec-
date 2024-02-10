#include <iostream>
using namespace std;
int main() {
  short number;
  cout << "Enter a number: ";
  cin >> number;
  switch (number) {
  case 1:
    cout << 1;
  case 2:
    cout << 2;
  case 3:
    cout << 6;
  case 4:
    cout << 24;
  case 5:
    cout << 120;
  case 6:
    cout << 720;
  case 7:
    cout << 5040;
  case 8:
    cout << 40320;
  case 9:
    cout << 362880;
  case 10:
    cout << 3628800;
  }
  if (number >= 11) {
    cout << "The factorial of " << number << " is ";
    long accumulator = 1;
    for (; number > 0; accumulator *= number--)
      ;
    cout << accumulator << ".\n";
  }
  return 0;
}