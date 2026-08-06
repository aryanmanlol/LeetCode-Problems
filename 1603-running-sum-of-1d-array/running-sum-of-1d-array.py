class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        ans = [nums[0]]
        n = len(nums)

        for i in range(1,n):
            nums[i]=nums[i-1]+nums[i]
            ans.append(nums[i])
        return ans
        


        

        