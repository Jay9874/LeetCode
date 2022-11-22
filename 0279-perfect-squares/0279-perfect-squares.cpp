class Solution {
public:
    int numSquares(int n) {
        vector<int> squares;
        for(int i = 1; i*i<=n; i++){
            squares.push_back(i*i);
        }
        int num = squares.size();
        vector<vector<int>> memo(num+1, vector<int>(n+1, -1));
        return dp(squares, num-1, n, memo);
    }
    
    int dp(vector<int>& squares, int index, int sum, vector<vector<int>>& memo){
        if(sum==0)  return 0;
        if(sum<0 || index<0)   return 10000000;
        if(memo[index][sum]!=-1)    return memo[index][sum];
        int take = 1+dp(squares, index, sum-squares[index], memo);
        int notTake = dp(squares, index-1, sum, memo);
        memo[index][sum] = min(take, notTake);
        return memo[index][sum];
    }
};