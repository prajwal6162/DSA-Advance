class Solution{
private:
    bool func(int index, int sum, int size, vector<int>& nums){
        if(sum==0){
            return true;
        }
        if(sum < 0 || index==size){
            return false;
        }

        bool part1=func(index+1, sum-nums[index], size, nums);
        bool part2=func(index+1, sum, size, nums);

        return part1 || part2;
    }

public:
    bool checkSubsequenceSum(vector<int>& nums, int k) {
        return func(0, k, nums.size(), nums);
    }
};
