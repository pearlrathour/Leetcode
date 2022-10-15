class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {
        int c=0;
        for(auto &i:op){
            if(i=="++X" or i=="X++")
                c++;
            else c--;
        }
           return c;
    }
};