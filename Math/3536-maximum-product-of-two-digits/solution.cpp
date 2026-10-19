class Solution {
public:
    int maxProduct(int n) {
          vector<int> sample;
          while(n > 0){
            int re = n%10;
            n/=10;
            sample.push_back(re);
          }
          sort(sample.begin(),sample.end());
          return sample[sample.size()-1]*sample[sample.size()-2];
    }
};
