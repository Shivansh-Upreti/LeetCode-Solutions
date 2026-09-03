class Solution {
public:
    bool isPalindrome(long long int x) {
        long long int temp=x,rev=0,rem;
        if(x<0){
            return false;
        }
        else{
            while(temp!=0){
                rem=temp%10;
                rev=rev*10+rem;
                temp=temp/10;
            }
        }
        if(rev==x){
            return true;
        }
        else{
            return false;
        }
    }
};