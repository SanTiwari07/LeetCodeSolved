class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        for(int i=0; i<operations.size(); i++) {
            if(operations[i]=="+") {
                int temp = s.top();
                s.pop();
                temp += s.top();
                s.push(temp-s.top());
                s.push(temp);
            }
            else if(operations[i]=="D") {
                s.push(2*s.top());
            }
            else if(operations[i]=="C") {
                s.pop();
            }
            else {
                s.push(stoi(operations[i]));
            }
        }
        int ans = 0;
        while(!s.empty()) {
            ans += s.top();
            s.pop();
        }
        return ans;
    }
};
