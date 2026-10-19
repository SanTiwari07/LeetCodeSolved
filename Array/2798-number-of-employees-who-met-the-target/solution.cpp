class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;
        for(int a = 0 ;  a < hours.size() ; a++){
            if(hours[a]>=target) count++;
        }
        return count;
    }
};
