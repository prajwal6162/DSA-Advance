class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int n=nums.size();
            int count=INT_MIN;
            for(int i=0;i<n;i++){
                int sum=0;
                for(int j=i;j<n;j++){
                    sum+=nums[j];
                    count=max(count, sum);
            }
            }
            return count;
        }
    };