class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:

        n=len(nums)
        a=[]
        a.append(nums[0])

        for i in range(1,n):
            x=a[i-1]+nums[i]
            a.append(x)
        return a

        