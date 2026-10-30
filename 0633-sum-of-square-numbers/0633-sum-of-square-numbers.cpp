class Solution {
public:
    bool judgeSquareSum(int c) {
        long l=0,r=(long)sqrt(c);
        while(l<=r){
            long sum=l*l + r*r;
            if(sum==c){
                return true;
            }
            else if(sum<c){
                l++;
            }
            else{
                r--;
            }
        }
        return false;
    }
};