#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i) {
    int x, y, n;
    cin >> x >> y >> n;
    cout << (n - y) / x * x + y << "\n";
  }

  return 0;
}
