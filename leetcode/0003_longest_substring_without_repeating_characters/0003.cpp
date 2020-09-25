#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        unordered_map<char, int> m;
        for (int i = 0, j = 0; j < s.size(); ++j) {
            if (m.find(s[j]) != m.end()) i = max(i, m[s[j]]);
            m[s[j]] = j + 1;
            res = max(res, j - i + 1);
        }
        return res;
    }
};
