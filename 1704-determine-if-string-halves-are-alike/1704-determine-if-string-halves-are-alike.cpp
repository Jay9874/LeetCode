class Solution {
public:
    
    bool isVowel(char letter){
        string vowels = "aAeEiIoOuU";
        for(int i=0; i<10; i++){
            if(vowels[i] == letter) return true;
        }
        return false;
    }
    bool halvesAreAlike(string s) {
        int n = s.size();
        int firstHalfVowels = 0, secondHalfVowels = 0;
        for(int i=0; i<n; i++){
            if(i<n/2 && isVowel(s[i])){
                firstHalfVowels++;
            }
            else if(i>=n/2 && isVowel(s[i])) secondHalfVowels++;
        }
        if(firstHalfVowels == secondHalfVowels) return true;
        else return false;
    }
};