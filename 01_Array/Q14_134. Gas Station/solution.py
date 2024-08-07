class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        if sum(gas) < sum(cost): return -1

        curr_gas_balance = 0
        start_station = 0

        for i in range(len(gas)):
            curr_gas_balance += gas[i] - cost[i]
            if curr_gas_balance < 0:
                curr_gas_balance = 0
                start_station = i+1
        
        return start_station


# Time Complexity -> O(n)
# Space Complexity -> O(1)
