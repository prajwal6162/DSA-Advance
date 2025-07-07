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
   int mini=INT_MAX;
   int maxi=INT_MIN;
   for(int i=0;i<n;i++){
    mini=min(nums[i], mini);
    maxi=max(nums[i], maxi);
   }

   for(int j=mini;j<=maxi;j++){
    if(possible(nums, j, k, m)) return j;
   }
   return -1;
  }
};