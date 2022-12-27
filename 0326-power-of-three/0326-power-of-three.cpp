class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1 || n==0)
            return n;
        if(n%3==0){
            n/=3;
            return isPowerOfThree(n);
        }
        return 0;
    }
};