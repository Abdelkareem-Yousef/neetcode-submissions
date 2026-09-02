class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        n,m = len(s1),len(s2)
        if n > m  :
            return False
        
        target = sorted(s1)

        for i in range(m-n+1):
            window=s2[i:i+n]
            if sorted(window)== target :
                return True
        
        return False 
        