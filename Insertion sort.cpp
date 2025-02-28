class Solution {
    public:
        vector<int> insertionSort(vector<int>& nums) {
            int n=nums.size();
            for(int i=0;i<n;i++){
                int j=i;
                // Shift elements to the right to make space for the current element
                while( j>0 && nums[j-1]>nums[j]){
                    swap(nums[j-1], nums[j]);
                    j--;
                }
            }
            return nums;
        }
    };