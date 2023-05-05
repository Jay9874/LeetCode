class Solution {
public:
    bool checkVowel(char c){
         return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    
    int maxVowels(string s, int k) {
        int n = s.size();
        int leftP = 0, rightP = 0;
        int vowels = 0, maxi = 0;
        while(rightP < n){
            if(rightP < k){
                if(checkVowel(s[rightP])){
                    vowels++;
                }
            }else{
                if(checkVowel(s[rightP]) && !checkVowel(s[leftP])){
                    vowels++;
                }else if(!checkVowel(s[rightP]) && checkVowel(s[leftP])){
                    vowels--;
                }
                leftP++;
            }  
            if(vowels > maxi) maxi = vowels;
            if(maxi == k) return maxi;
            rightP++;
        }
        return maxi;
    }
};