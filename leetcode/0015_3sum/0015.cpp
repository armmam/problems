#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(begin(nums), end(nums));
        for (int i = 0; i < int(nums.size()) - 2; ++i) {
            if (nums[i] > 0) return res; // pruning
            if (i == 0 || nums[i] != nums[i - 1]) {
                int sum = -nums[i], j = i + 1, k = nums.size() - 1;
                while (j < k) {
                    if (nums[j] + nums[k] == sum) {
                        res.push_back({nums[i], nums[j], nums[k]});
                        while (j < k && nums[j] == nums[j + 1]) ++j;
                        while (j < k && nums[k] == nums[k - 1]) --k;
                        ++j;
                        --k;
                    } else if (nums[j] + nums[k] < sum) ++j;
                    else --k;
                }
            }
        }
        return res;
    }
};
