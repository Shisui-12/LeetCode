class Solution:
def addDigits(self, num: int) -> int:
    if (num <= 9):
        return num
    lst = [int(x) for x in str(num)]
    sum1 = sum(lst)
    if (sum1 > 9):
        return self.addDigits(sum1)
    if (sum1 <= 9):
        return sum1
		
# This  is the recursive approach 

if(num==0):
        return 0
    elif(num%9==0):
        return 9
    else:
        return num%9
		
# 		This is the DIGITAL ROOT Method ->

#   "When a number is to  be divisible by 9 its sum of the digits is to be divisible by 9"

#   "Also whenver you add 9 to a number the sum of all its digits remains unchanged "

#                    Example - 53 -> 5 + 3 = 8
#  now even if you add 9 to 53 the answer is still 8 -> 9 + 53 = 62 -> 6 + 2 = 8
#   This is the fundamental undelying principle of digital root
