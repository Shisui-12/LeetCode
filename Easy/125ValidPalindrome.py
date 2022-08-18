	class Solution:
             def isPalindrome(self, s: str) -> bool:
                       alphabets = [x for x in s if x.isalnum()]
                       str1 = ""
                       str1 = "".join(alphabets).lower()
                       print(str1)
                       if (str1 == str1[::-1]):
                              return True
                       return False
					   
					   
# 	Here firstly using list comprehension we weed out all the non alphanumeric charectors including spaces
# 	Then using the join method using convert the list to a string
# 	Now using string slicing (::-1 simply meaning traverse the string from the end to beginning)
# 	we check if it is a palindrome and accordingly return a bool
