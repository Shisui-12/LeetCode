class Solution:
           def singleNumber(self, nums: List[int]) -> int:
                    lst = [x for x in nums if nums.count(x) == 1]
                    return lst[0]
					
# 	Here  using list comprehension on the given list we get the element whose count
# 	is one then we return it with using the only constant extra space
