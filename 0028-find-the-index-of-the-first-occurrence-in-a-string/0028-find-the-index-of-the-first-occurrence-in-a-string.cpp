class Solution {
public:
    int strStr(string haystack, string needle){
        if(needle.size()<=haystack.size()){
            return haystack.find(needle);;
        }
        return -1;
    }
};