class Solution {
public:
    int special(vector<int> &nums, int mid){
        int count=0;
        for(auto i : nums){
            if(i>=mid)
                count++;
        }
        if(count==mid)
            return 0;
        else if(count>mid)
            return 1;
        else
            return -1;
    }
    
    int specialArray(vector<int>& nums) {
        int low=1;
        int high=nums.size();
        int mid,check;
        
        while(low <= high){
            mid=(high-low)/2 + low;
            check=special(nums,mid);
            
            if(check==0){
                return mid;
            }
            else if(check==-1){
                high=mid-1;
            }
            else if(check==1){
                low=mid+1;
            }
        }
        return -1;
    }
};