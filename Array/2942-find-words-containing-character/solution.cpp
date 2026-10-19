class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>res;
        for(int a = 0 ; a < words.size() ; a++){
            for(int b = 0 ; b < words[a].size() ; b++){
                if (words[a][b] == x) {
                    res.push_back(a);
                    break;
                }
        
            }
        }
        return res;
    }
};
