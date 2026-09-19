class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<=nums.size();i++){
            m[i]=0;
        }
        for(auto ele:nums){
            m[ele]++;
        }
        for(auto p:m){
            if(p.second==0){
                return p.first;
            }
        }
        return -1;
    }
};