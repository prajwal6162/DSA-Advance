class Solution {
private:
  bool possible(vector<int> &nums, int dist, int cows){
    int count=1;
    int last=nums[0];
    int n=nums.size();
    for(int i=1;i<n;i++){
      if(nums[i]-last >= dist){
        count++;
        last=nums[i];
      }
      if(count >= cows) return true;
    }
    return false;
  }

public:
    int aggressiveCows(vector<int> &nums, int k) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int limit = nums[n-1] - nums[0];
        for(int i=1;i<=limit;i++){
          if(possible(nums, i, k)==false) {
          return (i-1);
          }
        }
      return limit;
    }
};