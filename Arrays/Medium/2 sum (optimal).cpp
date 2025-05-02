class Solution {
    public:
    //these is most optimal for variety 1 if output is to give in Yes or No format.
        vector<int> twoSum(vector<int>& nums, int target) {
            int n=nums.size();
            unordered_map<int, int> mpp;
            for(int i=0;i<n;i++){
                int a=nums[i];
                int more=target-a;
                if(mpp.find(more) != mpp.end()){
                    return {mpp[more], i};
                }
                mpp[a]=i;
            }
            return {-1, -1};
        }
    };