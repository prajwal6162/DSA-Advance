class Solution {
    public:
    //These is most optimal for type 2 in which we have to return the index.
        vector<int> twoSum(vector<int>& nums, int target) {
            int n=nums.size();
    
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(nums[i]+nums[j]==target){
                        return {i, j};
                    }
                }
            }
            return {-1, -1};
        }
    };