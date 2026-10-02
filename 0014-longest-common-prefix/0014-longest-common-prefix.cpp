class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        for(int col=0;col<strs[0].size();col++){
            char ch=strs[0][col];
            for(int row=1;row<strs.size();row++){
                if(col>=strs[row].size() || strs[row][col]!=ch){
                    return ans;
                }
            }
            ans+=ch;
        }
        return ans;
    }
};