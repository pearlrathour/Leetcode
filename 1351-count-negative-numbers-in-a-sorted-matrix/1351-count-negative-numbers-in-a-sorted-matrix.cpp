class Solution {
public:
    int firstneg(vector<int>& i,int low,int high){
        int pos=-1;
        int mid;
        while(low<=high){
                mid=(low+high)/2;
                if(i[mid]<0){
                    pos=mid;
                    high=mid-1;
                }
                else
                    low=mid+1;
            }
        return pos;
    }
    
    int countNegatives(vector<vector<int>>& grid) {
        int low,high;
        int count=0;
        for(auto i : grid){
            low=0;
            high=i.size()-1;
            int j=firstneg(i,low,high);
            if(j!=-1)
                count+=high-j+1;
        }
        return count;
    }
};