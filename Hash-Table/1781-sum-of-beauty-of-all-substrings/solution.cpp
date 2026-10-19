class Solution {
public:
    int beautySum(string s) {
      unordered_map<char,int>sample;
      for(auto x:s){
        sample[x]++;
      }
      vector<int>answer;
      for (auto p : sample) {
        answer.push_back(p.second);
        }

      sort(answer.begin(),answer.end());

      return answer[0]*answer[0] + answer[answer.size()-1]*answer[answer.size()-1];
    }
};
