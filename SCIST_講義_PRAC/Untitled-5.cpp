#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  if (n < 0) {
    cout << n - n * 2 << "\n";
  } else {
    cout << n << "\n";
  }
  return 0;
}