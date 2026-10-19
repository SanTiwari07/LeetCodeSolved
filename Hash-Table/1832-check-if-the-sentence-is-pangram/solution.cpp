class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> number(26,0);
        if(sentence.size() < 26) return false;
        for(int a = 0 ; a < sentence.size() ; a++){
            number[sentence[a]-'a']++;
        }
        for(int a = 0 ; a < 26 ; a++){
            if(number[a] == 0){
                return false;
            }
        }
        return true;
    }
};
