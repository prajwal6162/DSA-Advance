class Solution {
    public:
        void rotateArrayByOne(vector<int>& nums) {
            int temp=nums[0];
            int n=nums.size();
            for(int i=1;i<n;i++){
                nums[i-1]=nums[i];
            }
            nums[n-1]=temp;
        }
    };