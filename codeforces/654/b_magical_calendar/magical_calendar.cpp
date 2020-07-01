#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i) {
    int n, r;
    cin >> n >> r;
    unsigned long long ans = n < r ? n : r;
    ans = n <= r
        ? ans * (ans - 1) / 2 + 1
        : (ans + 1) * ans / 2;
    cout << ans << "\n";
  }

  return 0;
}
