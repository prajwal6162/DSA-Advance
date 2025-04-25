class Solution {
    public:
        vector<int> leaders(vector<int>& nums) {
          vector<int> temp;
          int n=nums.size();
          for(int i=0;i<n;i++){
            bool leader=true;
            for(int j=i+1;j<n;j++){
                if(nums[j] > nums[i]){
                    leader=false;
                    break;
                }
            }
            if(leader==true) temp.push_back(nums[i]);
          }
    
          return temp;
        }
    };