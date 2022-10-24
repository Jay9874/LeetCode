class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> emp(n+1, 0);
        for(int i=0; i<n; i++){
            emp[nums[i]]++;
        }
        int repIndex, lostInd;
        for(int i=1; i<n+1; i++){
            if(emp[i] > 1){
                repIndex = i;
            }
            if(emp[i] == 0){
                lostInd = i;
            }
        }
        vector<int> lost = {repIndex, lostInd};
        return lost;
    }
};