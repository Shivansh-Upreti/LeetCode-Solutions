class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=0,r=1;
        int count=1;
        while(r<nums.size()){
            if(nums[l]==nums[r]){
                r++;
            }
            else{
                nums[l+1]=nums[r];
                count++;
                l++;
                r++;
            }
        }
        return count;
    }
};