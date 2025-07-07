class Solution {
  long long hours(vector<int> nums, int k){
    long long sum=0;
    for(int i=0;i<nums.size();i++){
      sum+= ceil((double) nums[i] / (double) k);
    }
    return sum;
  }
public:
int minimumRateToEatBananas(vector<int> nums, int h) {
    int maxi = *max_element(nums.begin(), nums.end());
    for(int i=1;i<=maxi;i++){
      long long reqTime = hours(nums, i);
      if(reqTime <= (long long)h) return i; 
    }
    return maxi;
    }
};
//using linear search;