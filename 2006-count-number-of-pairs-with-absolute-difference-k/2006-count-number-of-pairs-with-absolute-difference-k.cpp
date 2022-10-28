class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int>ump;
        int res=0;
        for(auto i=0;i<nums.size();i++){
            res+= ump[nums[i]+k] + ump[nums[i]-k];
            ump[nums[i]]++;
        }
        return res;
    }
};