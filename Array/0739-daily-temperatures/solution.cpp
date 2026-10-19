class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> answer(temperatures.size(), 0);
        stack<int> st;

        for(int a = 0; a < temperatures.size(); a++) {
            while(!st.empty() && temperatures[a] > temperatures[st.top()]) {
                int prev = st.top();
                st.pop();

                answer[prev] = a - prev;
            }

            st.push(a);
        }

        return answer;
    }
};
