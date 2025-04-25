class Solution {
    public:
        vector<int> rearrangeArray(vector<int>& nums) {
            vector<int> pos, neg;
            int n=nums.size();
            for(int i=0;i<n;i++){
                if(nums[i]>0) pos.push_back(nums[i]);
                else neg.push_back(nums[i]);
            }
            for(int j=0;j<n/2;j++){
                nums[j*2]=pos[j];
                nums[j*2+1]=neg[j];
            }
    
            return nums;
        }
    };