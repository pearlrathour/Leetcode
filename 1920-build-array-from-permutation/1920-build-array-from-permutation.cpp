class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int l=nums.size();
        vector<int>v(l);
        for(int i=0;i<l;i++){
            v[i]=nums[nums[i]];
        }
        return v;
    }
};