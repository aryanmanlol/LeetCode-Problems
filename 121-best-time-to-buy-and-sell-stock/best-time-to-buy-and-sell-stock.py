class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        current = prices[0]
        
          
        profit = 0
        for i in range(1,len(prices)):
            max_profit = prices[i]-current
            if max_profit > profit:
                profit = max_profit
            if prices[i]< current:
                current = prices[i]
            
        return profit

       

        


        