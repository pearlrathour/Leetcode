class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int>mp;
        for(auto i : nums)
            mp[i]++;
        for(auto x : mp){
            if(x.second % 2 != 0)
                return 0;
        }
        return 1;
    }
};