class Solution {
public:

    int minimumRounds(vector<int>& t) {
        int n = t.size();
        unordered_map<int, int> mp;
        for(auto it: t){
            auto mp_it = mp.find(it);
            if(mp_it == mp.end()){
                mp.insert({it, 1});
            }else {
                mp[it]++;
            }
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