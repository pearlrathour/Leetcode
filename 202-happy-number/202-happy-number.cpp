class Solution {
public:
    bool isHappy(int n) {
        while(n>6){
        int num=0;
        while(n){
            if(n/10==0)
                num+=pow(n,2);
            else
                num+=pow(n%10,2);
            n=n/10;
        }
            n=num;
        }
        return n==1; 
    }
};