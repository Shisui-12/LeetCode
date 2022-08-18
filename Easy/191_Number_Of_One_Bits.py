class Solution:
           def hammingWeight(self, n: int) -> int:
                   ans = bin(n).replace("0b","")
                   res = [int(x) for x in str(ans)]
                   sol = res.count(1)
                   return sol
				   
# 	Here you first convert the given number to binary using the bin method and remove the 0b prefix
# 	then use a list comprehension to convert the string into a list 
# 	then using the built in count function to return number of ones
	
# 	below is the condensed form of the same code ->
	
	class Solution:
           def hammingWeight(self, n: int) -> int:
                   res = [int(x) for x in str(bin(n).replace("0b",""))]
                   return res.count(1)
