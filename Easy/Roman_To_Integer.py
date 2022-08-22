class Solution:
  def romanToInt(self, s: str) -> int:

    values = { 'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}

    count  = values[s[0]]
    
    n = len(s)
    
    for i in range(1, n):
        
        if (values[s[i-1]] < values[s[i]]):
            
	        count += (values[s[i]] - values[s[i-1]]*2)
        else:
            
	        count  += values[s[i]]
            
    return count
	
	
# 	-> In Roman Numerals if a smaller value preceeds a larger value it decrements the larger 
# 	value by itself
# 	In our case we do (values[s[i]] - values[s[i-1]]*2) beacuse in the next iteration when i - 1 becomes i the value is added in the else statement 
# 	-> This helps us return the correct answer
