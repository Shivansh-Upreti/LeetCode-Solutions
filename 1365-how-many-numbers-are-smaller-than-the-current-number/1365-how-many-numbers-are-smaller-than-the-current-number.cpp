class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map <int,int> m;
        vector <int> arr;
        for(auto ele:nums){
            m[ele]++;
        }
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(auto p:m){
                if(p.first<nums[i]){
                    count+=p.second++;
                }
            }
            arr.push_back(count);
        }
        return arr;
    }
};