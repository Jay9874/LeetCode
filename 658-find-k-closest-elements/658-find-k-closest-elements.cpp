class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        int l=0, r=n-1-k;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(x-arr[mid]<=arr[mid+k]-x){
                r=mid-1;
            }
            else
                l=mid+1;
        }
        vector<int> ans;
        for(int i=l;i<l+k;i++)
            ans.push_back(arr[i]);
        return ans;
        
    }
};