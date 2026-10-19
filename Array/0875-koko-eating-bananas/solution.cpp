class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int mini = 1;
        int maxi = *max_element(piles.begin(),piles.end());
        int mid = -1;
        int ans = maxi;
        while(mini <= maxi){
            mid = mini +(maxi - mini)/2;
            long long temp = 0;
            for(int a = 0 ; a < piles.size() ; a++){
                temp += (piles[a]/mid);
                if(piles[a]%mid != 0) temp++;
            }
            if(temp > h) mini = mid + 1;
            else{
                ans = mid;
                maxi = mid - 1;
            }
        }
        return ans;
    }
};
