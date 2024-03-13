class Solution {
    
public: float apSum(int n){
    int a = n*(n+1);
    return a/2;
      }  
public:
    int pivotInteger(int n) {
        int sum = apSum(n);
        int currSum = 0;


        for(int i=1; i<=n; i++){
            currSum += i;

            if(currSum == (sum - currSum+i)) return i;
        }
               return -1;
    }
};