class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> judge(n+1);
        
        for(auto it:trust)
        {
            judge[it[0]]--; //substract 1 from person who trusts other
            judge[it[1]]++; //add 1 to person who is trusted by other
        }
        
        //So the judge will be the person who get (n-1) trust count
        //because he doesn't trust himself (mentioned)
        for(int i=1; i<=n; i++)
            if(judge[i]==n-1) return i;
        
        //when no such person exist
        return -1;
    }
};