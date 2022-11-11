class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> arr(nums);
        int n = arr.size(), k = -1;
        stack<int> st;
        for(int i=0; i<n; i++) {
            if(st.empty()){
                st.push(arr[i]);
                nums[++k] = arr[i];
                continue;
            }
            if(st.top() != arr[i]) {
                st.push(arr[i]);
                nums[++k] = arr[i];
            }
            else {
                st.push(arr[i]);
            }
        }
        return k+1;
    }
};