class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        n = 2*n;
        vector<int> suff(n);
        for(int i=0, j=n/2, k=0; i<n/2; i++, j++){
            suff[k++] = nums[i];
            suff[k++] = nums[j];
        }
        return suff;
    }
};