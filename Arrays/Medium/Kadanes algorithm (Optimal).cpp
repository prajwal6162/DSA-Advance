class Solution {
    public:
    // Kadane's algorithm (T.C. reduce to O(N));
        int maxSubArray(vector<int>& nums) {
            int n=nums.size();
            long long sum=0;
            long long count = INT_MIN;
            for(int i=0;i<n;i++){
                sum+=nums[i];
                if(sum>count){
                    count=sum;
                }
                if(0>sum){
                    sum=0;
                }
            }
            return count;
        }
    };