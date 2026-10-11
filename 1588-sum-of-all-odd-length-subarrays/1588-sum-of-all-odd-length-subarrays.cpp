class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans=0;
        for(int i=0;i<arr.size();i++){
            int totalSubArr=(i+1)*(arr.size()-i);
            int oddSubArr=(totalSubArr+1)/2;
            ans+=arr[i]*oddSubArr;
        }
        return ans;
    }
};