class Solution {
public:
    int sum = 0;
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        sum = 0;  

        for (int r = n - 2; r >= 0; r--) {
            for (int c = 0; c < triangle[r].size(); c++) {
                triangle[r][c] += min(triangle[r+1][c], triangle[r+1][c+1]);
            }
        }
        for(int r=0;r<n;r++){
            for(int c=0;c<triangle[r].size();c++){
                cout<<triangle[r][c]<<' ';
            }
            cout<<'\n';
        }
        sum = triangle[0][0];
        return sum;
    }
};
