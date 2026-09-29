class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int> m1,m2;
        for(char ch:s){
            m1[ch]++;
        }
        for(char ch:t){
            m2[ch]++;
        }
        for(char ch:s){
            if(m1[ch]!=m2[ch]){
                return false;
            }
        }
        return true;
    }
};