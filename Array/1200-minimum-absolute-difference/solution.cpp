class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> answer;
        sort(arr.begin(),arr.end());
        int mini = INT_MAX;
        for(int a = 1 ; a < arr.size() ; a++){
            int diff = arr[a]-arr[a-1];
            if(mini > diff){
                mini = diff;
                answer.clear();
                answer.push_back({arr[a - 1], arr[a]});
            }
            else if(mini == diff){
                answer.push_back({arr[a - 1], arr[a]});
            }
        }
        answer.erase(unique(answer.begin(),answer.end()),answer.end());
        return answer;
    }
};
