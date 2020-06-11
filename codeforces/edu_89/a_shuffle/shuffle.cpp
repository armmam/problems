#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  for (int i = 0; i < t; ++i) {
    int n, x, m, d = -1, a = -1;
    cin >> n >> x >> m;

    for (int j = 0; j < m; ++j) {
      int l, r;
      cin >> l >> r;

      if (d == -1) {

        if (x >= l && x <= r) {
          d = l;
          a = r;
        }

      } else {
        
        if (r >= d && l < d) {
          d = l;
        }
        if (l <= a && r > a) {
          a = r;
        }

      }
    }

    cout << a - d + 1 << "\n";
  }

  return 0;
}
