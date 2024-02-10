#include <iostream>
using namespace std;

int main() {
  int x;
  while (true) {
    cin >> x;

    // cout << (x >= 0 && x % 5 == 0 ? x / 5.0 : -1) << "\n";

    /*
     if (x >= 0 && x % 5 == 0) {
       cout << x / 5 << "\n";
     } else {
       continue
     }
     */

    /*
    if (x >= 0 && x % 5 == 0) {
      cout << x / 5 << "\n";
    } else if (x < 0) {
      cout << "Goodbye!"
           << "\n";
      break;
    } else {
      continue;
    }
    */
  }
  return 0;
}