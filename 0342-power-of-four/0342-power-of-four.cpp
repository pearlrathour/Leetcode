class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0 || n==1)
            return n;
        if(n%4==0){
            n/=4;
            return isPowerOfFour(n);
        }
        return 0;
    }
};