class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        int matchedAt = 0;
        int matchedChar = 0;
        if(n < m) return -1;
        vector<pair<string, int>> v;
        for(int i=0; n >= i+m; i++){
            if(haystack[i] == needle[0]){
                v.push_back({haystack.substr(i, m), i});
            }
        }
        for(int i=0; i<v.size(); i++){
            if(v[i].first == needle) return v[i].second;
        }
        return -1;
    }
};