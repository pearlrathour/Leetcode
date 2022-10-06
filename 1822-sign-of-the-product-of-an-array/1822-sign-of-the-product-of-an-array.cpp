class Solution {
public:
    int arraySign(vector<int>& nums) {
        double pro=1;
        for(auto i : nums)
            pro*=i;
        if(pro<0)
            return -1;
        else if(pro>0)
            return 1;
        else 
            return 0;   
    }
};