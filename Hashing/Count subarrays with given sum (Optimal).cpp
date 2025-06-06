class Solution{
public:
    int subarraySum(vector<int> &nums, int k){
        unordered_map<int, int> mpp;
        int n=nums.size();
        int prefixsum=0, count=0;
        mpp[0]=1;
        for(int i=0;i<n;i++){
          prefixsum += nums[i];
          int sumtoremove = prefixsum - k;
          count += mpp[sumtoremove];

          mpp[prefixsum] += 1; 
        }
        return count;
    }
};