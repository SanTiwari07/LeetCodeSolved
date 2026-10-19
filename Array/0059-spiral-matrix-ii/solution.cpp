class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>answer(n,vector<int>(n,0));
        int row = n;
        int col = n;
        int x = 0;
        int y = 0;
        int counter1 = 0;
        int counter2 = 0;
        int number = 1;
        while(number <= n*n){
            while(y < col){
            answer[x][y]=number;
            number++;
            y++;
        }
        y--;x++;
        while(x < row){
            answer[x][y]=number;
            number++;
            x++;
        }
        x--;y--;
        while(y >= counter2){
            answer[x][y]=number;
            number++;
            y--;
        }
        y++;x--;
        while(x > counter1){
            answer[x][y]=number;
            number++;
            x--;
        }
        counter1++;
        counter2++;
        x=counter1;
        y=counter2;
        row--;
        col--;
        }
        return answer;
    }
};
