#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  for (int x = 0; x < t; ++x) {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        cin >> arr[i][j];
      }
    }
    int valid = 1;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        if (arr[i][j] > ((i > 0 && i < n - 1) + (j > 0 && j < m - 1) + 2)) {
          cout << "NO\n";
          i = n;
          j = m;
          valid = 0;
        }
      }
    }
    if (valid == 1) {
      cout << "YES\n";
      for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
          cout << ((i > 0 && i < n - 1) + (j > 0 && j < m - 1) + 2) << " ";
        }
        cout << "\n";
      }
    }
  }
  return 0;
}
