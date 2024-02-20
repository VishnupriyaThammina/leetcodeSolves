class Solution(object):
    def missingNumber(self,nums):
        nums.sort()
        k = 0
        res = len(nums)
        for i in nums:
            if(i !=k):
                return k
            k+=1
        return res
        