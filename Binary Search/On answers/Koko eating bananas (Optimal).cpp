class Solution {
private:
  long long reqTime(vector<int> nums, int mid){
    long long sum=0;
    for(int i=0;i<nums.size();i++){
      sum+= ceil((double) nums[i] / (double) mid);
    }
    return sum;
  }
public:
int minimumRateToEatBananas(vector<int> nums, int h) {
  int low=1;
  int high= *max_element(nums.begin(), nums.end());
  while(low <= high){
    int mid=(low+high)/2;
    long long sum = reqTime(nums, mid);
    if(sum<=h) high=mid-1;
    else low=mid+1;
  }
  return low;
  }
};
