class Solution:
  
       def isAnagram(self, s: str, t: str) -> bool:
      
				lst = list(s)
				lst1 = list(t)
        
				lst.sort()
				lst1.sort()
        
				n = len(lst)
				n1 = len(lst1)
        
				if (n == n1):
					for i in range(n):
						if(lst[i] != lst1[i]):
							   return False
				else:
					       return False
          
				return True
				
# 		Here you first convert the given strings into lists and sort them 
# 		for an anagram  to exist the length of root word and the derived word has to be the same

# 		"An Anagram is a word or phrase formed by rearranging the letters of a 
# 		different word or phrase, typically using all the original letters exactly once."

# 		After that check you check the lists if both the lists are equal it implies that all 
# 		the original letters have only been used once  only rearrangement has been done
