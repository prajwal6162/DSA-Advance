class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int length=0;
        map<long long, int> mpp;
        long long sum=0;
        for(int i=0;i< nums.size(); i++){
            sum+=nums[i];
            if(sum==k){
                length=max(length, i+1);
            }
            long long rem = sum - k;
            if(mpp.find(rem) != mpp.end()){
                int len = i - mpp[rem];
                length = max(length, len);
            }
            if(mpp.find(sum) == mpp.end()){
                mpp[sum]=i;
            }
        }
        return length;
    }
};
