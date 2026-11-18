class Solution {
public:
    bool isVowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    int maxVowels(string s, int k) {
        int vowel=0,maxVow=0;
        for(int i=0;i<k;i++){
            if(isVowel(s[i])){
                vowel++;
            }
        }
        maxVow=vowel;
        for(int i=k;i<s.length();i++){
            if(isVowel(s[i-k])){
                vowel--;
            }
            if(isVowel(s[i])){
                vowel++;
            }
            maxVow=max(maxVow,vowel);
        }
        return maxVow;
    }
};