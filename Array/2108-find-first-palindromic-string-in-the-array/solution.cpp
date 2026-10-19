class Solution {
public:
    string firstPalindrome(vector<string>& words) {
       for(int a = 0 ; a < words.size() ; a++){
        int left = 0;
        int right = words[a].size()-1;
        int count = 0;
        for(int b = 0 ; b < words[a].size() ; b++){
            if(left < right){
                if(words[a][left] !=words[a][right]){
                    break;
                }else{
                    count++;
                    left++;
                    right--;
                }
            }
        }
        if(count == words[a].size()/2){
            return words[a];
        }
       } 
       return "";
    }
};
