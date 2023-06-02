#define ll long long
class Solution {
public:
    
    void dfs(vector<vector<int>> &g, vector<int> &vis, int i, int &c){
        vis[i] = 1;
        c++;
        int n = g[i].size();
        for(int j=0; j<n; j++){
            if(! vis[g[i][j]]){
                dfs(g, vis, g[i][j], c);
            }
        }
    }
    
    int maximumDetonation(vector<vector<int>>& bombs) {
        int n = bombs.size();
        vector<vector<int>> graph(n);
        for(int i=0; i<n; i++){
            ll x1 = bombs[i][0],
            y1 = bombs[i][1],
            r1 = bombs[i][2];

            for(int j=0; j<n; j++){
                if(i != j){
                    ll x = pow(abs(x1 - bombs[j][0]),2);
                    ll y = pow(abs(y1 - bombs[j][1]),2);
                    if(x+y <= r1*r1){
                        graph[i].push_back(j);
                    }
                }
            }
        }
        int ans = INT_MIN;
        for(int i=0; i<n; i++){
            int cnt = 0;
            vector<int> vis(n, 0);
            dfs(graph, vis, i, cnt);
            ans = max(ans, cnt);
        }
        return ans;
    }
};