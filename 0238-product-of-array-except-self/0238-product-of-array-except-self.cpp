class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int prefix=1;
        int suffix=1;
        for(int i=0;i<nums.size();i++){
            if(i>0){
                prefix*=nums[i-1];
            }
            ans.push_back(prefix);
        }
        for(int i=nums.size()-1;i>=0;i--){
            ans[i]*=suffix;
            suffix*=nums[i];
        }
        return ans;


        }
};