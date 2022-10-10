class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int l=nums.size();
        // int count1=count(nums.begin(), nums.end(),nums[0]);
        //     if(count1 > (l/2))
        //         return nums[0];
        // int max=count1;
        // for(int i=1 ; i<l ; i++){
        //     int count2=count(nums.begin(), nums.end(),nums[i]);
        //     if(count2 > (l/2))
        //         return nums[i];
        //     else
        //         if(count1>count2)
        //             max=nums[0];
        //         else
        //             max=nums[i];
        // }
        // return max;
        
        sort(nums.begin(), nums.end());
        return nums[l/2];
        
    }
};