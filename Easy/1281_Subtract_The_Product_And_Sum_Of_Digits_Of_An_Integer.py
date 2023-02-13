class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        prod = 1
        sum = 0
        s = str(n)
        for i in s:
              prod *= int(i)
              sum += int(i)
        return prod - sum
