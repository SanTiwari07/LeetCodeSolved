class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>test = nums;
        sort(test.begin(),test.end());
        int a = 0;
        int b = nums.size()-1;
        int sample1,sample2;
        while(a < b ){
            if(test[a]+test[b] == target) {
                sample1 =test[a];
                sample2 =test[b];
                break;
            }
            else if((test[a]+test[b]) > target) b--;
            else if((test[a]+test[b]) < target) a++;
        }
        for(int x = 0 ; x < nums.size() ; x++){
            if(nums[x]==sample1){
                a = x;
                break;
            }
        }
        for(int x = 0 ; x < nums.size() ; x++){
            if(nums[x]==sample2 && x !=a){
                b = x;
                break;
            }
        }
        return {a,b};
    }
};
