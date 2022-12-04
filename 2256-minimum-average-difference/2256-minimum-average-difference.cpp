class Solution {
public:
    
    static bool comp(pair<int, int> el1, pair<int, int> el2){
        if(el1.second < el2.second) return true;
        if(el1.second == el2.second){
            if(el1.first < el2.first) return true;
        }
        return false;
    }
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        long leftSum = 0, rightSum = 0;
        vector<pair<int, int>> mp;
        long absDiff = 0;
        long totalSum = 0;
        for(auto it:nums){
            totalSum += it;
        }
        if(n == 0) return 0;
         else{
            for(int i=0; i<n; i++){
                leftSum += nums[i];
                rightSum = totalSum - leftSum;
                if(n-i-1 == 0){
                    absDiff = leftSum/(i+1);
                }
                else{
                    absDiff = abs(leftSum/(i+1) - rightSum/(n-i-1));
                }
                mp.push_back(make_pair(i, absDiff));
            }
            sort(mp.begin(), mp.end(), comp);
//              DEBUGGING
             // for(auto it: mp){
             //     cout<<"first: "<<it.first<<" second: "<<it.second<<"\n";
             // }
             auto ans = mp.begin();
             return ans->first;
        }
    }
};