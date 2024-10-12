class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size();
        long long maxi = LONG_MIN;
        long long sum = 0;
        for(int i = 0; i<len; i++){ // giving the size of substring
           
          
                
             
             
                    cout<<nums[i]<<" ";
                    sum += nums[i];
             
                cout<<"\n";
                cout<<"Sum: "<<sum<<"\n";
                if(sum > maxi) maxi = sum;
            if(sum < 0) sum = 0;
            
        }
        return maxi;
    }
};