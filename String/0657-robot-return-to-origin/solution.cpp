class Solution {
public:
    bool judgeCircle(string moves) {
        int count1 = 0;
        int count2 = 0;
        for(auto a:moves){
            if(a=='U'){
                count1++;
            }
            else if(a=='L'){
                count2++;
            }
            else if(a=='D'){
                count1--;
            }
            else if(a=='R'){
                count2--;
            }
        }

        return (count1 == 0 && count2 == 0);
    }
};
