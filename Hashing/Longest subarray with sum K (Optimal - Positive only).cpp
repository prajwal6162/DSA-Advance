class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int n = nums.size();
        int sum=nums[0];
        int length=0;
        int left=0, right=0;
        while(right < n){
            while(left<=right && sum>k){
                sum-=nums[left];
                left++;
            }
            if(sum==k){
                length = max(length, right-left+1);
            }
            right++;
            if(right<n){
                sum+=nums[right];
            }
        }
        return length;
    }
};
