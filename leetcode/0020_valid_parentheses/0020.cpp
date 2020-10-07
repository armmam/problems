#include <string>
#include <deque>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        deque<char> st;
        unordered_map<char, char> brackets = {
            {'{', '}'},
            {'(', ')'},
            {'[', ']'}
        };
        for (char c : s) {
            if (brackets.find(c) != brackets.end()) st.push_back(c);
            else {
                if (!st.empty() && brackets[st.back()] == c) st.pop_back();
                else return false;
            }
        }
        return st.empty() ? true : false;
    }
};
