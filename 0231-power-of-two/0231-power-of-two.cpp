class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0 || n==1)
            return n;
        if(n%2==0){
            n/=2;
            return isPowerOfTwo(n);
        }
        return 0;
    }
};