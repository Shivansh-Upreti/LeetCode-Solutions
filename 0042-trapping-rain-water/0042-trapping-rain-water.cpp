class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> lm(height.size()),rm(height.size());
        int water=0;
        lm[0]=height[0];
        for(int i=1;i<height.size();i++){
            lm[i]=max(lm[i-1],height[i]);
        }
        rm[height.size()-1]=height[height.size()-1];
        for(int i=height.size()-2;i>=0;i--){
            rm[i]=max(rm[i+1],height[i]);
        }
        for(int i=0;i<height.size();i++){
            water+=min(lm[i],rm[i])-height[i];
        }
        return water;
    }
};