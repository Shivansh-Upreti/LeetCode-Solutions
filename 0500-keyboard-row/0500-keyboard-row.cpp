class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        unordered_map<char,int> m;
        for(char ch:"qwertyuiop"){
            m[ch]=1;
        }
        for(char ch:"asdfghjkl"){
            m[ch]=2;
        }
        for(char ch:"zxcvbnm"){
            m[ch]=3;
        }

        for(string word:words){
            int row=m[tolower(word[0])];
            bool valid=true;
            for(char ch:word){
                if(m[tolower(ch)]!=row){
                    valid=false;
                    break;
                }
            }
            if(valid){
                ans.push_back(word);
            }
        }
        return ans;
    }
};