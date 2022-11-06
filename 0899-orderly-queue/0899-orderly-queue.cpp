class Solution {
public:
    string orderlyQueue(string s, int k) {
         int n=s.size();
        if(k>1){
       // we simply return sorted string. 
            sort(s.begin(),s.end());
            return s;
        }else{
         // if(k==1) then lets understand with an e.g s="cba" , s+s="cbacba" we just need to find minimum string of size n, starting from index 1
            string temp=s;
            s+=s;
            for(int i=1;i<n;i++){
                temp=min(temp,s.substr(i,n));
            }
            return temp;
        }
    }
};