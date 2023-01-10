class Solution {
public:
    int arrangeCoins(int n) {
        int low=1;
        int high=n;
        long long mid,ans;
        long long sum;
        
        while(low <= high){
            mid=(high-low)/2 + low;
            sum=mid*(mid+1)/2;
            
            if(sum == n)
                return mid;
            else if(sum < n){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};