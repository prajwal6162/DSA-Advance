class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        sort(nums.begin(), nums.end());
        int longest=1;
        int count=1;
        int lastSmaller=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]-1 == lastSmaller){
                count++;
                lastSmaller=nums[i];
            }
            else if(nums[i] != lastSmaller){
                count=1;
                lastSmaller=nums[i];
            }
            longest = max(longest, count);
        }
        return longest;
    }
};