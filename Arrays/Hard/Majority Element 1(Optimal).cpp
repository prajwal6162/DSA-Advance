class Solution {
    public:
    // More Voting Algorithm
        int majorityElement(vector<int>& nums) {
            int n=nums.size();
            int count=0;
            int ele;
            for (int i=0;i<n;i++){
                if(count == 0){
                    ele=nums[i];
                    count=1;
                }
                else if(nums[i] == ele){
                    count++;
                }
                else{
                    count--;
                }
            }
    
            int maxi=0;
            for (int i=0;i<n;i++){
                if(nums[i] == ele){
                    maxi++;
                }
                if(maxi > n/2) return ele;
            }
    
            return -1;
        }
    };