class Solution:
    def __init__(self):
        self.memo=[-1]*100
    def rob(self, nums: list[int]) -> int:
        def solve(nums: list[int],i)->int:
            if i>= len(nums):
                return 0
            if self.memo[i]!=-1:
                return self.memo[i]
            rob= nums[i]+solve(nums, i+2)
            skip =solve(nums, i+1)
            self.memo[i]= max(rob,skip)
            return self.memo[i]
        return solve(nums,0)

ans=Solution()
print()