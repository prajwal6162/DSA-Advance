class Solution {
    private:
        // Function to reverse the array between start and end
        void reverseArray(vector<int>& nums, int start, int end) {
            while (start < end) {
                int temp = nums[start];
                nums[start] = nums[end];
                nums[end] = temp;
                start++, end--;
            }
        }
        
    public:
        // Function to rotate the array to the left by k positions
        void rotateArray(vector<int>& nums, int k) {
            int n = nums.size(); // Size of array
            k = k % n; // To avoid unnecessary rotations
            
            // Reverse the first k elements
            reverseArray(nums, 0, k - 1);
    
            // Reverse the last n-k elements
            reverseArray(nums, k, n - 1);
    
            // Reverse the entire vectora
            reverseArray(nums, 0, n - 1);
        }
    };