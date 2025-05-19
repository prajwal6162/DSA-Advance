class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int n=nums.size();
        int length=0;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                    if(sum==k){
                    length= max(length, (j-i+1));
                }
            }
        }
        return length;
    }
};
