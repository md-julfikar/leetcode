class Solution:
    def __init__(self):
        self.memo=dict()
    def climbStairs(self, n: int) -> int:
        memo=dict()
        if n==1: 
            return 1
        if n==2:
            return 2
        if n in self.memo:
            return self.memo[n];
        self.memo[n]= self.climbStairs(n-1)+ self.climbStairs(n-2)
        return self.memo[n]
    
ans=Solution()
print(ans.climbStairs(n=3))