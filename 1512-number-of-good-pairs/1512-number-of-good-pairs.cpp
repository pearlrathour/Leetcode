class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto i:nums){
            freq[i]++;
        }
        int pair=0;
        for(auto i:freq){
            int f=i.second;
            pair+=(f*(f-1))/2;
        }
        return pair;
    }
};