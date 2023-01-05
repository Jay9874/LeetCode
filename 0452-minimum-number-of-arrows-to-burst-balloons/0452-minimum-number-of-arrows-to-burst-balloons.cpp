class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {
        int n = p.size();
        sort(p.begin(), p.end());
        int ans = 1; 
        int lastVal = p[0][1];
        for(int i=1; i<n; i++){
            if(p[i][0] > lastVal) {
                ans++;
                lastVal = p[i][1];
            }else{
                lastVal= min(lastVal, p[i][1]);
            }
        }
        return ans;
    }
};