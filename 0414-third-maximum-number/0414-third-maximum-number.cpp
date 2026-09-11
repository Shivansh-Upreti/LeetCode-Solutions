class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=1,maxT=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
               if(nums[i]!=maxT){
                count++;
                maxT=nums[i];
               }
               if(count==3){
                return maxT;
               }
        }
        return nums[nums.size()-1];
    }
};