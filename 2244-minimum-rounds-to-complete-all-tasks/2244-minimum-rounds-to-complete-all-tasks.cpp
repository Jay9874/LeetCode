class Solution {
public:

    int minimumRounds(vector<int>& t) {
        int n = t.size();
        unordered_map<int, int> mp;
        for(auto &it: t){
            mp[it]++;
        }
        int min_round = 0;
        for(auto it: mp){
            if(it.second == 1) return -1;
            else{
                if(it.second %3 !=0){
                    min_round += it.second/3 +1;
                }
                else min_round += it.second/3;
            }
        }
        return min_round;
    }
};