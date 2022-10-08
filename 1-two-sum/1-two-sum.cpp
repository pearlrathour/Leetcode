class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum=0;
        vector<int>arr;
        int l=nums.size();
        for(int i=0 ; i<l ; i++){
            for(int j=i+1 ; j<l ; j++){
                if(nums[j]==(target - nums[i])){
                    arr.push_back(i);
                    arr.push_back(j);
                    return arr;
                }
        }
                   }
        return arr;
    }
};