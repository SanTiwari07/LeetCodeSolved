class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_set<int> number(nums.begin(),nums.end());
        map<int,int>freq;
        for(auto x:nums){
            freq[x]++;
        }
        int max=0;
        int sum=0;
        for(auto a : number){
            if(freq[a]>max){
                sum=freq[a];
                max=freq[a];
            }
            else if(freq[a]==max){
                sum+=freq[a];
            }
        }
        return sum;
    }
};
