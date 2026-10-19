class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        for(int a = 2 ; a < n ; a++){
            cost[a]+=min(cost[a-1],cost[a-2]);
        }
        return min(cost[n-1],cost[n-2]);
    }
};
