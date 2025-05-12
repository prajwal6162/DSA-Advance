class Solution {
public:
    vector<int> majorityElementTwo(vector<int>& nums) {
        vector<int> result;
        map<int, int> mpp;
        int n=nums.size();
        int mini=(n/3)+1;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]] == mini){
                result.push_back(nums[i]);
            }
            if(result.size()==2) break;
        }
        sort(result.begin(), result.end());
        return result;
    }
};