class Solution {
    public:
        vector<vector<int>> fourSum(vector<int>& nums, int target) {
            set<vector<int>> st;
            int n=nums.size();
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    for(int k=j+1;k<n;k++){
                        for(int l=k+1;l<n;l++){
                            if(nums[i] + nums[j] + nums[k] + nums[l] == target){
                                vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                                sort(temp.begin(), temp.end());
                                st.insert(temp);
                            }
                        }
                    }
                }
            }
            vector<vector<int>> ans(st.begin(), st.end());
            return ans;    
        }
    };