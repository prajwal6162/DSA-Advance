class Solution {
private:
  bool possible(vector<int> nums, int day, int k, int m){
    int n=nums.size();
    int count=0;
    int noOfB=0;
    for(int i=0;i<n;i++){
      if(nums[i] <= day) count++;
      else{
        noOfB += (count / k);
        count=0;
      }
    }
    noOfB += (count / k);

    return noOfB >= m;
  }
public:
int roseGarden(int n,vector<int> nums, int k, int m) {
   long long val = m * 1ll * k * 1ll;
   if(val > n) return -1;
   int ans=-1;
   int low= *min_element(nums.begin(), nums.end());
   int high= *max_element(nums.begin(), nums.end());
   while(low <= high){
    int mid=(low+high)/2;
    if(possible(nums, mid, k, m)) {
      ans=mid;
      high=mid-1;
    }
    else low=mid+1;
   }
   return ans;
  }
};