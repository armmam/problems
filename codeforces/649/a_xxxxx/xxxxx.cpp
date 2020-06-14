#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i) {
    int n, x;
    cin >> n >> x;

    int numbers[n];
    for (int j = 0; j < n; ++j) {
      cin >> numbers[j];
      if (j == 0) {
        numbers[0] %= x;
      } else {
        numbers[j] = (numbers[j] + numbers[j - 1]) % x;
      }
    }

    int zero_i = -1, iter[x], max = -1;
    fill_n(iter, x, -1);

    for (int j = 0; j < n; ++j) {
      
      if (numbers[j] == 0) {
        if (zero_i != -1 && max < j - zero_i) max = j - zero_i;
      } else {
        if (max < j + 1) max = j + 1;
        if (iter[numbers[j]] == -1) {
          iter[numbers[j]] = 1;
          if (zero_i == -1) zero_i = j;
        }
      }

    }
    cout << max << "\n";
  }

  return 0;
}
