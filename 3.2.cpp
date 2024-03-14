#include <climits>
#include <iostream>

using namespace std;
int main() {
  int n = 3;
  double mean;
  int max = 0;
  int min = INT_MAX;
  for (int i = 0; i < n; i++) {
    int j;
    cin >> j;
    mean += j;
    max = j > max ? j : max;
    min = j < min ? j : min;
  }

  mean /= n;
  cout << "Mean: " << mean << "\n";
  cout << "Max: " << max << "\n";
  cout << "Min: " << min << "\n";

  return 0;
}
