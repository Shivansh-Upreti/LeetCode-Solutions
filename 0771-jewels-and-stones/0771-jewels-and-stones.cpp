class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewelSet(jewels.begin(),jewels.end());
        int jewelCount=0;
        for(char stone:stones){
            if(jewelSet.count(stone)){
                jewelCount++;
            }
        }
        return jewelCount;
    }
};