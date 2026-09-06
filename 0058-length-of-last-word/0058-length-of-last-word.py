class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s=s.strip()
        count=0
        for i in s:
            if(i=='\t' or i==' '):
                    count=0
            else:
                count+=1
            
        return count