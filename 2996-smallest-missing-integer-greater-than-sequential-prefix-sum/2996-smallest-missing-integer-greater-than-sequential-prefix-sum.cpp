class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int Seqsum=nums[0],index;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                Seqsum+=nums[i];
            }
            else{
                index=i;
                break;
            }
        }
        int i=0;
        while(i<nums.size()){
            if(nums[i]==Seqsum){
                i=index;
                Seqsum++;
            }
            else{
                i++;
            }

        }
        return Seqsum;

    }
};