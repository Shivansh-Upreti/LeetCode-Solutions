class Solution {
public:
    int strStr(string haystack, string needle){
        int pos=haystack.find(needle);
        for(int i=0;i<haystack.size();i++){
            if(needle==haystack.substr(i,needle.size())){
                return pos;
            }
        }
        return -1;
    }
};