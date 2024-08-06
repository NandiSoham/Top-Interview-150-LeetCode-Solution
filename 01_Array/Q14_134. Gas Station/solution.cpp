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


// time Complexity -> O(n^2)
// Space Complexity -> O(1)

// -----------------------------------------------------------------------------------------------
