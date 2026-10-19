class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>sample=score;
        vector<string>answer;
        sort(sample.begin(),sample.end());
        for(int a = 0 ;  a < sample.size() ; a++){
            if(score[a] == sample[sample.size()-1]){
                answer.push_back("Gold Medal");
            }
            else if(score[a] == sample[sample.size()-2]){
                answer.push_back("Silver Medal");
            }
            else if(score[a] == sample[sample.size()-3]){
                answer.push_back("Bronze Medal");
            }
            else{
                for (int b = 0; b < sample.size(); b++) {
                    if (score[a] == sample[b]) {
                        int rank = sample.size() - b; 
                        answer.push_back(to_string(rank));
                        break;
                    }
                }
                
            }
        }
        return answer;
    }
};
