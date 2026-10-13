class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        struct compare{
            bool operator()(string &a,string&b){
                if(a.length()==b.length()){
                    return a<b;
                }
                return a.length()<b.length();
            }
        };
        priority_queue<string,vector<string>,compare> pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        k--;
        while(k--){
            pq.pop();
        }
        return pq.top();
    }
};