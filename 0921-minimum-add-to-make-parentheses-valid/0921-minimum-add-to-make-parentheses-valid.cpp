class Solution {
public:
    int minAddToMakeValid(string s) {
        int open_p=0;
        int closed_p=0;
        for(char ch:s){
            if(ch=='('){
                closed_p++;
            }
            else if(ch==')'){
                if(closed_p>0){
                    closed_p--;
                }
                else{
                    open_p++;
                }
            }
        }
        return open_p+closed_p;
    }
};