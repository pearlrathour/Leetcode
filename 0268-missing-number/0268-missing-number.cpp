class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum1=0;
        for(auto i:nums)
            sum1+=i;
        int sum2=(n*(n+1))/2;
        return sum2-sum1;
    }
};