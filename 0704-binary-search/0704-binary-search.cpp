class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
        int mid=(l+h)/2;
        while(l<=h){
            if(target==nums[mid]){
                return mid;
            }
            else if(target<nums[mid]){
                h=mid-1;
                mid=(l+h)/2;
            }
            else if(target>nums[mid]){
                l=mid+1;
                mid=(l+h)/2;
            }
        }
        return -1;
    }
};