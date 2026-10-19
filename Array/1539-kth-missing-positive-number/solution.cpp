class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int number = 1;
        int answer=-10;
        int count = 0;
        int a = 0;
        while(count != k){
            if(arr.size() <= a || number < arr[a]){
                answer = number;
                count++;
                number++;
            }
            else{
                number++;
                a++;
            }
        }
        return answer;
    }
};
