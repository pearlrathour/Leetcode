class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>v=nums;
        unordered_map<int,int>ump;
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>=0;i--){
            ump[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            v[i]=ump[v[i]];
        }
        return v;
    }
};