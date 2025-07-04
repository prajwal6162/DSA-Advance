class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        int n=nums.size();
        int low=0, high=n-1;
        int ans=INT_MAX, index=-1;
        while(low <= high){
            int mid=(low+high)/2;
            if(nums[low]<=nums[high]){
                if(nums[low] < ans){
                    ans=nums[low];
                    index=low;
                }
                break;
            }
            if(nums[low] <= nums[mid]){
                if(nums[low] < ans){
                    ans=nums[low];
                    index=low;
                }
                low=mid+1;
            }
            else{
                if(nums[mid] < ans){
                    ans=nums[mid];
                    index=mid;
                }
                high=mid-1;
            }
        }
        return index;
    }
};