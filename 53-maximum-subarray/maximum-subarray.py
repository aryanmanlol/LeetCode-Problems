class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        n = len(nums)
        current = 0 
        max_sum = nums[0]

        for i in range(n):
            current+=nums[i]
            if current>max_sum:
                max_sum = current
            if current <0:
                current = 0

        return max_sum






       
        