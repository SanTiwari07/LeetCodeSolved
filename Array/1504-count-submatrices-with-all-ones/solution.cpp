class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int r = sizeof(mat) / sizeof(mat[0]);
        int c = sizeof(mat[0]) / sizeof(mat[0][0]);
        int row = 0;
        int col = 0;
        int final = 0;
        for(int i = 0 ; i < r ; i++){
            for(int j = 0 ; j < c ; j++){
                int count = 0;
                while(count < r){
                    if(row >= r){
                    break;
                }
                if(col < c){ 
                    int sum = 1;
                    for(int a = 0 ; a <= count ; a++){
                        sum = sum * mat[row][a];
                        if(sum == 1){
                        final++;
                    }
                    }
                    col++;
                    row++;
                }else{
                    col= 0;
                    row = 0;
                    
                }
                }
                
                
            }
        }
        for(int i = 0 ; i < c ; i++){
            for(int j = 0 ; j < r ; j++){
                if(row >= r){
                    break;
                }
                if(col < c){
                    int count = 0;
                    int sum = 1;
                    for(int a = 0 ; a <= count ; a++){
                        sum = sum * mat[i][j];
                    }
                    if(sum == 1){
                        final++;
                    }
                    col++;
                }
                else{
                    col= 0;
                    row++;
                }
                
            }
        }
        return final;
    }
};
