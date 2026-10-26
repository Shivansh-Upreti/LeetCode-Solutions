class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans=0,i=0,n=nums.size();
        while(i<n){
            if(nums[i]==val){
                int j=i;
                while(j<n-1){
                    nums[j]=nums[j+1];
                    j++;
                }
                n=n-1;
            }
            else{
                ans++;
                i++;
            }
        }
        return ans;
    }
};