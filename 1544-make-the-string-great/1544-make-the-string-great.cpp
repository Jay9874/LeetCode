class Solution {
public:
    string makeGood(string s) {
        int n = s.size();
        if(n==1) {
            return s;
        }else{
            stack<char> st;
            char q[100];
            int f=0, r=0;
            for(int i=0; i<n; i++){
                if(st.empty()) {
                    st.push(s[i]);
                    q[r++] = s[i];
                }
                else if(abs(st.top() - s[i]) == 32) {
                    st.pop();
                    r--;
                }
                else {
                    st.push(s[i]);
                    q[r++] = s[i];
                }
            }
            string ans = "";
            while(f<r){
                ans += q[f++];
            }
            return ans;
        }
    }
};