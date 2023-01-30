class Solution {
public:
    
    int recFn(vector<int> &cache, int n){
        if(cache[n] == -1){
            cache[n] = recFn(cache, n-3) + recFn(cache, n-2) + recFn(cache, n-1);
        }
        return cache[n];
    }
    
    int tribonacci(int n) {
        vector<int> cache(n+3, -1);
        cache[0] = 0;
        cache[1] = 1;
        cache[2] = 1;
        return recFn(cache, n);
    }
};