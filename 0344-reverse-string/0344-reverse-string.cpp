class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=0,r=s.size()-1;
        char temp;
        for(int i=0;i<s.size()/2;i++){
            temp=s[i];
            s[i]=s[s.size()-(i+1)];
            s[s.size()-(i+1)]=temp;
        }
    }
};