class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int freq[101];
        for(int n:nums){
            freq[n]++;
        }
        int sum=0;
        for(int i=0;i<101;i++){
            if(freq[i]==1){
                sum+=i;
            }
        }
        return sum;
    }
};