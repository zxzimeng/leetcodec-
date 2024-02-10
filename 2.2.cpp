#include <iostream>
using namespace std;

int main() {
  int input;
  cin >> input;

  for (int i = 0; i < input; i++) {
    cout << "Hello"
         << "\n";
  }

  int i = 0;
  while (i < input) {
    cout << "Hello"
         << "\n";
    i++;
  }

  i = 0;
  do {
    cout << "Hello"
         << "\n";
    i++;
  } while (i < input);
  return 0;
}