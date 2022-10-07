class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int l=mat.size();
        for(int i=0;i<l;i++){
            sum+=mat[i][i] + mat[i][l-i-1];
        }
        if(l%2==1)
            sum-=mat[l/2][l/2];
        return sum;
    }
};