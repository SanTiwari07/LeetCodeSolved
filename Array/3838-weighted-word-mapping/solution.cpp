class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string answer ="";
        unordered_map<char,int>q;
        for(int i = 0 ; i < 26 ; i++){
            char sample = 'a' + i; 
            q[sample]=weights[i];
        }
        for(int a = 0 ; a < words.size() ; a++){
            int sum = 0;
            for(int b = 0 ; b < words[a].size() ; b++){
                char che = words[a][b];
                sum+=q[che];
            }
            sum = sum%26;
            char answerr= 'z'-sum;
            answer+=answerr;
        }
        return answer;
    }
};
