class Solution {
public:
    string reverseWords(string s) {
        stack<char> remember;
        string answer;

        for (int a = (int)s.length() - 1; a >= 0; --a) {
            if (s[a] == ' ') {
                if (remember.empty()) {
                    continue;
                } else {
                    while (!remember.empty()) {
                        answer += remember.top();
                        remember.pop();
                    }
                    answer.push_back(' ');
                }
            } else {
                remember.push(s[a]);
            }
        }
        while (!remember.empty()) {
            answer += remember.top();
            remember.pop();
        }
        if (!answer.empty() && answer.back() == ' ')
            answer.pop_back();

        return answer;
    }
};
