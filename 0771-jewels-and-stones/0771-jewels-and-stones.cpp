class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>stone;
        int count=0;
        for(auto i:stones)
            stone[i]++;
        for(auto i:jewels){
            if(stone.find(i)!=stone.end())
                count+=stone[i];
        }
        return count;
    }
};