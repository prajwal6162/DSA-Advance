class Solution {
private:
    void func(int index, int size, vector<int>& nums, vector<int> &arr, vector<vector<int>> &ans){
        if(index==size){
            ans.push_back(arr);
            return;
        }

        func(index+1, size, nums, arr, ans);
        arr.push_back(nums[index]);

        func(index+1, size, nums, arr, ans);
        arr.pop_back();
    }

public:	
    vector<vector<int> > powerSet(vector<int>& nums) {
       vector<vector<int>> ans;
       vector<int> arr;
       func(0, nums.size(), nums, arr, ans);
       return ans;
    }
};