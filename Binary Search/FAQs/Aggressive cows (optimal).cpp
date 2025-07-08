class Solution {
private:
  bool possible(vector<int> &nums, int dist, int cows){
    int n=nums.size();
    int count=1;
    int last=nums[0];
    for(int i=1;i<n;i++){
      if(nums[i] - last >= dist){
        count++;
        last=nums[i];
      }
      if(count>=cows) return true;
    }
    return false;
  }
public:
    int aggressiveCows(vector<int> &nums, int k) {
      sort(nums.begin(), nums.end());
      int n=nums.size();
      int low=1;
      int high= nums[n-1]-nums[0];
      while(low <= high){
        int mid=(low+high)/2;
        if(possible(nums, mid, k)==false) high=mid-1;
        else low=mid+1;
      }
      return high;
    }
};