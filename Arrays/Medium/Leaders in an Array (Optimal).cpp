class Solution {
    public:
        vector<int> leaders(vector<int>& nums) {
          int n=nums.size();
          vector<int> temp;
          int maxi=INT_MIN;
    
          for(int i=n-1;i>=0;i--){
            if(nums[i]>maxi){
                temp.push_back(nums[i]);
            }
            maxi=max(maxi, nums[i]);
          }
    
          reverse(temp.begin(), temp.end());
          return temp;
          
        }
    };