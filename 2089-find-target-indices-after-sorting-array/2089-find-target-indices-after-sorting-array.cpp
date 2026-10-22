class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        int less_than=0;
        int equal=0;
        for(int n:nums){
            if(n<target){
                less_than++;
            }
            else if(n==target){
                equal++;
            }
        }
        for(int i=0;i<equal;i++){
            ans.push_back(less_than+i);
        }
        return ans;
    }
};