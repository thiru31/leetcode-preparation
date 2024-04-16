class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s = nums.size();
        int tot_sum = (pow(s,2)+s) / 2;
        int vecsum = 0;
        for (int ele : nums) {
            vecsum += ele;
        }
        return (tot_sum-vecsum);
    }
};