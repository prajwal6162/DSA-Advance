class Solution {
    public:
        int secondLargestElement(vector<int>& nums) {
            int n=nums.size();
            if(n==2) return -1;
            int largest=nums[0];
            int slargest=-1;   
            for(int i=1;i<n;i++){
                if(nums[i]>largest){
                    slargest=largest;
                    largest=nums[i];
                }
                else if(nums[i]<largest && nums[i]>slargest){
                    slargest=nums[i];
                }
            }   
            return slargest;
        }
    };