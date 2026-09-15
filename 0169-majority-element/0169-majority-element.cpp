class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> m;
        for(auto ele:nums){
            m[ele]++;
        }
        for(auto p:m){
            if(p.second>(nums.size()/2)){
               return p.first;
            }
        }
        return -1;
    }
};