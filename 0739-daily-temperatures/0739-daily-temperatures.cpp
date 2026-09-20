class Solution {
public:
    stack<int> st;
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> answer(temperatures.size(),0);
        for(int i=0;i<temperatures.size();i++){
            while(!st.empty() && temperatures[i]>temperatures[st.top()]){
                int prev=st.top();
                st.pop();
                answer[prev]=i-prev;
            }
            st.push(i);
        }
        return answer;

    }
    
};