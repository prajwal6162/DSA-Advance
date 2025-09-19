class Solution{
    private:
        int subsequence(int index, int sum, vector<int>& nums, int size){
            if(sum==0) return 1;
            if(sum<0 || index==size) return 0;
            int part1= subsequence(index+1, sum-nums[index], nums, size);
            int part2= subsequence(index+1, sum,  nums, size);
            return part1+part2;
        }
    public:    	
    int countSubsequenceWithTargetSum(vector<int>& nums, int k){
    	//your code goes here
        int n=nums.size();
        int output= subsequence(0, k, nums, n);
        return output;
    }
};