class Solution {
    //linear search --> simply return the index of smallest element in array by linear search;
public:
    int findKRotation(vector<int> &nums)  {
        int n=nums.size();
        int mini=INT_MAX, index=-1;
        for(int i=0;i<n;i++){
            if(nums[i]<mini){
            mini=nums[i];
             index=i;
            }
        }
        return index;
    }
};