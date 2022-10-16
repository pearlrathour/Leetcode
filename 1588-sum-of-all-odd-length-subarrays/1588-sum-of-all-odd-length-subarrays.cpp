class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int l=arr.size();
        int sum=0;
        for(int i=0 ; i<l ;i++){
            for(int j=i ; j<l ;j++){
                if((j-i+1)%2 ==1){
                    for(int k=i ; k<=j ;k++){
                        sum+=arr[k];
                    }
                }
            }
        }
        return sum;
    }
};