class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i=0;i<s.length();i+=2*k){
            int left=i;
            int right= min(i+k-1,(int)s.length()-1);
            while(left<right){
                char temp=s[left];
                s[left++]=s[right];
                s[right--]=temp;
            }
        }
        return s;
    }
};