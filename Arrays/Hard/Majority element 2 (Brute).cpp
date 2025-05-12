class Solution {
public:
    vector<int> majorityElementTwo(vector<int>& nums) {
        vector<int> result;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(result.size()==0 || result[0] != nums[i]){
                int count=0;
                for(int j=0;j<n;j++){
                    if(nums[i]==nums[j]) count++;
                }
                if(count > n/3) result.push_back(nums[i]);
            }
            if(result.size()==2) break;
        }
        return result;
    }
};