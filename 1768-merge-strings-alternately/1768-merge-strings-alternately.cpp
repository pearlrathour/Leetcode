class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l1=word1.length();
        int l2=word2.length();
        int i;
        string word;
        int l=min(l1,l2);
        for(i=0 ; i<l ; i++){
            word.push_back(word1[i]);
            word.push_back(word2[i]);
        }
        if(l1>=l2){
            for(i=l; i<l1 ; i++)
                 word.push_back(word1[i]);
        }
        else{
            for(i=l; i<l2 ; i++)
                 word.push_back(word2[i]);
        }
    return word;
    }
};