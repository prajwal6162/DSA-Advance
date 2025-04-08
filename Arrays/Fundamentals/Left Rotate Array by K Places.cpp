class Solution {
    public:
        void rotateArray(vector<int>& nums, int k) {
            int n=nums.size();
            k=k%n;
            vector<int> temp;
    
            for(int i=0;i<k;i++){
                temp.push_back(nums[i]);
            }
    
            for(int i=k;i<n;i++){
                nums[i-k]=nums[i];
            }
    
            for(int i=0;i<k;i++){
                nums[n-k+i]=temp[i];
            }
        }
    };