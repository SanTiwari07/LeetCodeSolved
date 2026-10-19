class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = 0;
        for(int a = 0 ; a < sentences.size() ; a++){
            int count = 0;
            for(int b = 0 ; b < sentences[a].size() ; b++){
                if(sentences[a][b] == ' '){
                    count++;
                }
            }
            count=count+1;
            maxi = max(maxi,count);
        }
        
        return maxi;
    }
};
