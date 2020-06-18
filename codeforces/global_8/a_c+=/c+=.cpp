#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i) {
    int a, b, n, times = 0;
    cin >> a >> b >> n;
    while (a <= n && b <= n) {
      if (a < b) {
        a += b;
      } else {
        b += a;
      }
      ++times;
    }
    cout << times << "\n";
  }

  return 0;
}
