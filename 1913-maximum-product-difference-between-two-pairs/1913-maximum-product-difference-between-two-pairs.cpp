class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long maxD=(1LL* nums[nums.size()-1] * nums[nums.size()-2]) - (1LL* nums[0]*nums[1]);
        return maxD;
    }
};