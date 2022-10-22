class Solution {
public:
    string minWindow(string s, string t) {
        map<char,int>mpp;
        string ans = "";
        for(int i = 0;i < t.length();i++){
            mpp[t[i]]++;
        }
        int ct = t.length();
        int p1 = 0,p2 = 0,len = INT_MAX;
        while(p2 < s.length()){
            while(ct != 0 && p2 < s.length()){
                if(mpp[s[p2]] > 0){
                    ct--;
                    mpp[s[p2]]--;
                }
                else{
                    mpp[s[p2]]--;
                }
                p2++;
            }
            if(ct != 0){
                return ans;
            }
            else{
                if(p2-p1 < len){
                    len = p2-p1;
                    ans = s.substr(p1,p2-p1);
                    cout << ans << endl;
                }
                while(ct == 0){
                    if(ct == 0){
                        if(p2-p1 < len){
                            len = p2-p1;
                            ans = s.substr(p1,p2-p1);
                            
                        }
                    }
                    mpp[s[p1]]++;
                    if(mpp[s[p1]] > 0){
                        ct++;
                        p1++;
                    }
                    else{
                        p1++;
                    }
                }
            }
        }
        return ans;
    }
};