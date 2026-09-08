class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxC=-1;
        unordered_map<int,int> m;
        for(int n:nums){
            m[n]++;
            maxC=max(maxC,m[n]);
        }
        int count=0;
        for(auto& pair : m){
            if(pair.second==maxC){
                count+=pair.second;
            }
        }
        return count;
    }
};