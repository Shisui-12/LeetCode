class Solution:
    def findMiddleIndex(self, nums: List[int]) -> int:
        total = sum(nums)
        n = len(nums)
        left = 0
        for i in range(n):
            if left == total - nums[i] - left:
                return i
            left += nums[i]
        return -1
    
        
