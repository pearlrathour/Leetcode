class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l=nums.size();
        if(l==0)
            return 0;
        
        for(int i=0 ; i<l ; i++){
            if(nums[i]==val){
                swap(nums[i],nums[l-1]);
                l--;
                i--;
            }
        }
        return l;
    }
};