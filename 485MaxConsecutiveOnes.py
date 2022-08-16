class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        result = 0
        count = 0
        n = len(nums)
        for i in range(n):
            if (nums[i] == 0):
                count = 0
            else:
                count += 1
                result = max(result,count)
        return result
        
