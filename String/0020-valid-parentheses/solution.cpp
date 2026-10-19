class Solution {
public:
    bool isValid(string s) {
        stack<char>sample;
        for(int a = 0 ; a < s.size() ;a++){
            if(s[a] == '{' ||s[a] == '(' ||s[a] == '[') sample.push(s[a]);
            else{
                if(sample.empty()) return false;
            char checker = sample.top();
            if(checker == '{' && s[a]== '}')sample.pop();
            
            else if(checker == '[' && s[a]== ']')sample.pop();
            
            else if(checker == '(' && s[a]== ')')sample.pop();
            else return false;
            }
            
        }
        return sample.empty();
    }
};
