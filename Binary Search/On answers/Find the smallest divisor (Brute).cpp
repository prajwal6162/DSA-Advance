class Solution {
public:
  int smallestDivisor(vector<int> &nums, int limit) {
    int max= *max_element(nums.begin(), nums.end());

    for(int i=1;i<=max;i++){
        int sum=0;
        for(int j=0;j<nums.size();i++){
          sum+=ceil((double)nums[j] / (double) i);
        }
      if(sum <= limit) return i;
    }
    return -1;
  }
};
//using linear search;