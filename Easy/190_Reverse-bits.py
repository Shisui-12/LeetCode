class Solution:
def reverseBits(self, n: int) -> int:
    binary = '{:032b}'.format(n)
    binary = binary[::-1]
    return int(binary,2)
	
# 	Here using the format spcifier of 032b -> a 32 bit unsigned binary number 
# 	assigned to the variable binary as a string
# 	using string slicing reverse the string and convert it to int
# 	and returning the answer
