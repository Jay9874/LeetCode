class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp, mp1;
        cout<<mp[0]<<endl;
        for(auto it:arr){
            mp[it]++;
        }
        for(auto it: mp){
            if(mp1[it.second]!= 0) return false;
            mp1[it.second]++;
        }
        return true;
    }
};