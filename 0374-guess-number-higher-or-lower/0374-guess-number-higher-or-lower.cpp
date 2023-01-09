/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int min=1, max=n;
        int mean,res;
        
        while(min <= max){
            mean=(max - min)/2 + min;
            
            res=guess(mean);
            
            if(res==0)
                return mean;
            if(res==-1)
                max= mean-1;
            else if(res==1)
                min= mean+1;
        }
        return mean;
    }
};