class Solution {
    public:
        // Function to merge two sorted halves of the array
        void merge(vector<int> &arr, int low, int mid, int high){
            // Temporary array to store merged elements
            vector<int> temp;
            int left=low;
            int right=mid+1;
    
            // Loop until subarrays are exhausted
            while(left<=mid && right<=high){
                // Compare left and right elements
                if(arr[left] <= arr[right]){
                    temp.push_back(arr[left]);
                    left++;
                }
                else{
                    temp.push_back(arr[right]);
                    right++;
                }
            }
    
            // Adding the remaining elements of left half
            while(left <= mid){
                temp.push_back(arr[left]);
                left++;
            }
    
            // Adding the remaining elements of right half
            while(right <= high){
                temp.push_back(arr[right]);
                right++;
            }
    
            // Transferring the sorted elements to arr
            for(int i=low; i<=high; i++){
                arr[i] = temp[i-low];
            }
        }
    
        // function to perform merge sort from low to high
        void msort(vector<int> &arr, int low, int high){
            // Base case: if the array has only one element
            while(low>=high) return;
    
            // Find the middle index
            int mid = (low + high)/2;
            // Recursively sort the left half
            msort(arr, low, mid);
            // Recursively sort the right half
            msort(arr, mid+1, high);
            // Merge the sorted halves
            merge(arr, low, mid, high);
    
        }
    
        // Function to perform merge sort on the given array
        vector<int> mergeSort(vector<int>& nums) {
            int n=nums.size();
            // Perform Merge sort on the whole array
            msort(nums, 0, n-1);
    
            return nums;
        }
    
    };
    