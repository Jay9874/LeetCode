class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), k = -1;
        stack<int> st;
        for(int i=0; i<n; i++) {
            if(st.empty()){
                st.push(nums[i]);
                nums[++k] = nums[i];
                continue;
            }
            if(st.top() != nums[i]) {
                st.push(nums[i]);
                nums[++k] = nums[i];
            }
            else {
                st.push(nums[i]);
            }
        }
        return k+1;
    }
};