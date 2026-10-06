class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string mergeStr="";
        int i=0;
        while(i<word1.size()||i<word2.size()){
            if(i<word1.size()){
                mergeStr+=word1[i];
            }
            if(i<word2.size()){
                mergeStr+=word2[i];
            }
            i++;
        }
        return mergeStr;
    }
};