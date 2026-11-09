class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int child_g=0,cookie_s=0;
        while(child_g<g.size()&&cookie_s<s.size()){
            if(s[cookie_s]>=g[child_g]){
                child_g++;
            }
            cookie_s++;
        }
        return child_g;
    }
};