class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>map;
        for(auto i:s){
            map[i]++;
            if(map[i]==2)
                return i;
        }
        return 's';
    }
};