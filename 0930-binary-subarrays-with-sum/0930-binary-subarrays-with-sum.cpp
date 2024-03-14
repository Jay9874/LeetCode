class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int res = 0;
        int len = nums.size();
        for (int start = 0; start < len; ++start) {
            int sum = 0;
            for (int end = start; end < len; ++end) {
                sum += nums[end];
                if (sum == goal) ++res;
                else if(sum > goal ) break;
            }
        }
        return res;
    }
};