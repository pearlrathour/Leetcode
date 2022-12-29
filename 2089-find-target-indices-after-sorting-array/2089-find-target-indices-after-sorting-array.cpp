class Solution {
public:
    int firstocc(vector<int>&nums,int target){
        int low=0;
        int high=nums.size()-1;
        int ans=nums.size();
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid] > target)
                high = mid-1;
            else if(nums[mid] < target)
                low = mid+1;
            else{
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
    
    int lastocc(vector<int>&nums,int target){
        int low=0;
        int high=nums.size()-1;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid] > target)
                high = mid-1;
            else if(nums[mid] < target)
                low = mid+1;
            else{
                ans=mid;
                low=mid+1;
            }
        }
        return ans;
    }
    
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>res;
        int f=firstocc(nums,target);
        int l=lastocc(nums,target);
        for(int i=f; i<= l; i++)
            res.push_back(i);
        return res;
    }
};