class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
      
      
      # Brute Force Approach -> 
      
        # set1 = set(nums)
        # for i in set1:
        #      if (nums.count(i) > 1):
        #             return True
        # return False
        
        set1 = set(nums)
        if (len(set1) == len(nums)):
            return False
        return True
      
#       Here you covert the nums array into a set since a set is a data structure that cannot contain duplicate values
# the length of the set and nums will only be the same if all the elements are distinct thereby we return True otherwise return False
      
      
