class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum = 0;
        for(int a = 0 ; a < columnTitle.size() ; a++){
            int num = int(columnTitle[a]-'A'+1);
            sum = 26*sum + num;
        }
        return sum;
    }
};
