class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int smallest=nums[0],largest=nums[nums.size()-1];
        int count=0;
        for(int n:nums){
            if(n>smallest && n<largest){
                count++;
            }
        }
        return count;
    }
};