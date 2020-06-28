#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i) {
    int n, count = 0;
    cin >> n;
    while (n % 3 == 0) {
      if (n % 6 == 0) {
        n /= 6;
      } else {
        n *= 2;
      }
      ++count;
    }
    if (n == 1) {
      cout << count << "\n";
    } else {
      cout << -1 << "\n";
    }
  }
  return 0;
}
