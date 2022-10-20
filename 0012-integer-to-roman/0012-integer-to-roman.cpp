class Solution {
public:
    string intToRoman(int num) {
        vector<pair<string, int>> vec;
        vec.push_back(make_pair("M", 1000));
        vec.push_back(make_pair("CM", 900));
        vec.push_back(make_pair("D", 500));
        vec.push_back(make_pair("CD", 400));
        vec.push_back(make_pair("C", 100));
        vec.push_back(make_pair("XC", 90));
        vec.push_back(make_pair("L", 50));
        vec.push_back(make_pair("XL", 40));
        vec.push_back(make_pair("X", 10));
        vec.push_back(make_pair("IX", 9));
        vec.push_back(make_pair("V", 5));
        vec.push_back(make_pair("IV", 4));
        vec.push_back(make_pair("I", 1));
        int remainder;
        string roman = "";
        int multiple;
        for(auto it:vec){
            int divider = it.second;
            if(divider > num) continue;
            remainder = num % divider;
            multiple = (num - remainder);
            multiple /= divider;
            for(int i=0; i<multiple; i++){
                roman += it.first;
            }
            num = remainder;
        }
        return roman;
    }
};