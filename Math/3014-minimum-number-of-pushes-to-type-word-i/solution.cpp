class Solution {
public:
    int minimumPushes(string word) {
        vector<int>sample(26,0);
        for(char c : word){
            sample[c-'a']++;
        }
        int answer = 0;
        sort(sample.rbegin(),sample.rend());
        for(int a = 0 ; a < 26 ; a++){
            if(sample[a] == 0)break;
            answer += sample[a]*(a/8 + 1);
        }
        return answer;
    }
};
