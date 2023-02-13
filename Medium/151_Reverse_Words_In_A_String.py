class Solution:
    def reverseWords(self, s: str) -> str:
        lst = list(s.split(' '))
        print(lst)
        lst.reverse()
        count = lst.count('')
        # print(count)
        while(count > 0):
            lst.remove('')
            count -= 1
        ans = ' '.join(lst)
        # print(ans)
        return ans
