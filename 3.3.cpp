#include <iostream>
using namespace std;

bool isPrime(int x) {
  if (x < 2) {
    return false;
  }
  if (x == 2) {
    return true;
  }

  for (int i = 2; i < x; i++) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  cin >> n;

  int primes = 0;
  int num = 0;
  while (primes < n) {
    if (isPrime(num)) {
      cout << num << "\n";
      primes++;
    }
    num++;
  }

  return 0;
}