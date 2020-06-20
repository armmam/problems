#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i) {
    int n, ans = 0;
    cin >> n;
    for (int j = 1; j <= n; ++j) {
      int max_div = -1, sec_max_div = -1;
      for (int k = j; k <= n; k += j) {
        sec_max_div = max_div;
        max_div = k;
      }
      if (max_div != -1 && sec_max_div != -1) {
        ans = j;
      }
    }
    cout << ans << "\n";
  }

  return 0;
}
