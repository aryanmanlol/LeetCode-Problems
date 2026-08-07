class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        left = 0
        right = len(numbers)-1

        for i in range(len(numbers)):
            sol=numbers[left]+numbers[right]
            if sol<target:
                left+=1
            if sol>target:
                right-=1
            if sol==target:
                return left+1,right+1


        