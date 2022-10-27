class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>ump;
        for(auto i : s)
            ump[i]++;
        bool flag=1;
        for(int i=0;s[i];i++){
            if(ump[s[i]]==ump[s[0]])
                flag=1;
            else{
                flag=0;
                return 0;
            }
        }
        return flag;
    }
};