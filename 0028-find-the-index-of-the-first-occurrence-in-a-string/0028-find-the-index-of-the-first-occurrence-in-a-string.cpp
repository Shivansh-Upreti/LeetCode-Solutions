class Solution {
public:
    int strStr(string haystack, string needle){
        for(int i=0;i<haystack.size();i++){
            if(needle==haystack.substr(i,needle.size())){
                return haystack.find(needle);;
            }
        }
        return -1;
    }
};