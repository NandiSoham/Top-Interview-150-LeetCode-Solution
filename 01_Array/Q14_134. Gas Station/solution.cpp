// ----------------------------------Approach - 1 (Brute Force) ----------------------------------

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();

        for(int i = 0; i < n; i++){
            if(gas[i] < cost[i]) continue;

            int j = (i+1) % n;
            int gasNeededToReachNextStation_i = cost[i];
            int gasGainInNextStation_i = gas[j];
            int currGas = gas[i] - gasNeededToReachNextStation_i + gasGainInNextStation_i;

            while(j != i){
                if(currGas < cost[j]) break;

                int gasNeededToGoNext_j = cost[j];
                j = (j+1) % n;
                int gasGaininNext_jStation = gas[j];
                currGas = currGas - gasNeededToGoNext_j + gasGaininNext_jStation;
            }

            if(j == i) return i;
        }

        return -1;
    }
};


// time Complexity -> O(n^2) [it might give TLE]
// Space Complexity -> O(1)

// -----------------------------------------------------------------------------------------------

// ---------------------------------Approach - 2 (Greedy Approach) -------------------------------

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();

        int totalGasGain = accumulate(gas.begin(), gas.end(), 0);
        int totalGasSpend = accumulate(cost.begin(), cost.end(), 0);

        if(totalGasGain < totalGasSpend) return -1;

        int currentGasBalance = 0;
        int startStation = 0;

        for(int i = 0; i < n; i++){
            currentGasBalance = currentGasBalance + gas[i] - cost[i];
            if(currentGasBalance < 0){
                currentGasBalance = 0;
                startStation = i + 1;
            }
        }

        return startStation;
    }
};



// Time Complexity -> O(n)
// Space Complexity -> O(1)

// -----------------------------------------------------------------------------------------------
