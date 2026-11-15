class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int num:nums){
            m[num]++;
        }
        vector<int> v;
        for(auto [val,freq]:m){
            if(freq>nums.size()/3){
                v.push_back(val);
            }
        }
        return v;
    }
};