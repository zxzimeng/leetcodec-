/*
ID: Zimeng Xiong [zimen]
TASK: test
LANG: C++
*/

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  ifstream fin("ride.in");
  string x;
  string y;
  fin >> x;
  fin >> y;
  int c = 0;
  int d = 0;
  for (auto a : x) {
    c *= int(a) - 64;
  }
  for (auto a : y) {
    d *= int(a) - 64;
  }
  if (c % 47 == d % 47) {
    cout << "Yes";
  }
  return 0;
}