class Solution {
public:
    int rob(vector<int>& nums) {
        int size = nums.size();
        vector<bool>answer(nums.size(),true);
        int sum = 0;
        int count = 0;
        while(count != size){
            int maxi = INT_MIN;
            int maxi_index;
            count = 0;
            for(int b = 0 ; b < size ; b++){
                if(answer[b] == true){
                    }else{
                        maxi = max(nums[b],maxi);
                        maxi_index = b;
                    }
                    
                }
                if(answer[b] == false){
                    count++;
                }
            }
            if(maxi_index == size -1){
                if(answer[0]==true && answer[maxi_index-2]==true){
                    sum += nums[maxi_index];
                    answer[0]=false;
                    answer[maxi_index-2]=false;
                    answer[maxi_index]=false;
                }
            }else if(maxi_index == 0){
                if(answer[1]==true && answer[size-1]==true){
                    sum += nums[maxi_index];
                    answer[0]=false;
                    answer[size-1]=false;
                    answer[1]=false;
                }
            }else{
                if(answer[maxi_index-1]==true && answer[maxi_index+1]==true){
                    sum += nums[maxi_index];
                    answer[maxi_index+1]=false;
                    answer[maxi_index-1]=false;
                    answer[maxi_index]=false;
                }
            }
        }

        return sum;
        
    }
};
