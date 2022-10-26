class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int l=prices.size();
        for(auto i=0;i<l;i++){
            for(auto j=i+1;j<l;j++){
                if(prices[j]<=prices[i]){
                    prices[i]-=prices[j];
                    break;
                }
            }
        }
        return prices;
    }
};