class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector <int>res;
        int i=0;
        for (int ele : nums) {
            int need= target-ele;
            if(m.find(need)!=m.end()){
                res.push_back(m[need]);
                res.push_back(i);
                break;
            }
            else
            {
                m[ele]=i++;
            }
        }
        return res;
    }
};