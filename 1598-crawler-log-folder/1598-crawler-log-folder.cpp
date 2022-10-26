class Solution {
public:
    int minOperations(vector<string>& logs) {
        int step=0;
        int l=logs.size();
        for(auto i=0;i<l;i++){
            if(isalpha(logs[i][0]) || isdigit(logs[i][0]))
                step++;
            else if(logs[i]=="../" && step>0){
                step--; 
            }
            else if(logs[i]=="./")
                continue;
        }
        return step;
    }
};