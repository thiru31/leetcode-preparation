#include <algorithm>

class Solution {

public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        unordered_map<int, int> m;
        for (int n =0;n<nums.size();n++) {
            if ((find(nums.begin()+(n+1), nums.end(), abs(nums[n] + k))) != nums.end()) {
                m[nums[n]] = abs(nums[n] + k);
            }
           
        }
        int count=0;
        for ( auto& pair : m) {
            count++;
        }
        return count;
    }
};