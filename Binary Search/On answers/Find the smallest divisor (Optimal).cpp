class Solution {
private:
  int subs(vector<int> &nums, int mid){
    int sum=0;
    for(int i=0;i<nums.size();i++){
      sum+=ceil((double)nums[i] / (double)mid);
    }
    return sum;
  }
public:
  int smallestDivisor(vector<int> &nums, int limit) {
  int n=nums.size();
  if(n > limit) return -1;
  int low=1;
  int high= *max_element(nums.begin(), nums.end());
  while(low <= high){
    int mid=(low+high)/2;
    int sum = subs(nums, mid);
    if(sum <= limit) high=mid-1;
    else low=mid+1;
  }
  return low;     
  }
};