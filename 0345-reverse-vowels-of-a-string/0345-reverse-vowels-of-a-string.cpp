class Solution {
public:
    string reverseVowels(string s) {
        int p1=0,p2=s.size()-1;
        while(p1<p2){
            bool l=( tolower(s[p1])=='a'||tolower(s[p1])=='e'||tolower(s[p1])=='i'||tolower(s[p1])=='o'||tolower(s[p1])=='u' );
            bool r=( tolower(s[p2])=='a'||tolower(s[p2])=='e'||tolower(s[p2])=='i'||tolower(s[p2])=='o'||tolower(s[p2])=='u' );
            if(l&&r){
                swap(s[p1],s[p2]);
                p1++;
                p2--;
            }
            else if(!l){
                p1++;
            }
            else{
                p2--;
            }
        }
        return s;
    }
};