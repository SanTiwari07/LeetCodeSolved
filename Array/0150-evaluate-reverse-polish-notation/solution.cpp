
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> num;

        for(int a = 0; a < tokens.size(); a++) {
            if(tokens[a] != "+" && tokens[a] != "-" &&
               tokens[a] != "*" && tokens[a] != "/") {
                num.push(stoi(tokens[a]));
            }
            else {
                int temp1 = num.top();
                num.pop();

                int temp2 = num.top();
                num.pop();

                if(tokens[a] == "+") {
                    num.push(temp2 + temp1);
                }
                else if(tokens[a] == "-") {
                    num.push(temp2 - temp1);
                }
                else if(tokens[a] == "*") {
                    num.push(temp2 * temp1);
                }
                else if(tokens[a] == "/") {
                    num.push(temp2 / temp1);
                }
            }
        }

        return num.top();
    }
};
