class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        unordered_set<int> unique;
        for(int num:arr){
            m[num]++;
        }
        for(auto pair:m){
            unique.insert(pair.second);
        }
        return m.size()==unique.size();
    }
};