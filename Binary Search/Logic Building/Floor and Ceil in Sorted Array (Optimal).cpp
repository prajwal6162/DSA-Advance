class Solution {
private:
    int findFloor(vector<int> nums,int n, int x){
        int ans=-1;
        int low=0;
        int high=n-1;
        while(low <= high){
            int mid = (low+high)/2;
            if(nums[mid] <= x){
                ans=nums[mid];
                low=mid+1;
            }
            else high=mid-1;
        }
        return ans;
    }

    int findCeil(vector<int> nums, int n, int x){
        int ans=-1;
        int low=0;
        int high=n-1;
        while(low <= high){
            int mid = (low+high)/2;
            if(nums[mid] >= x){
                ans=nums[mid];
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }


public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int n = nums.size();
        int floor=findFloor(nums, n, x);
        int ceil=findCeil(nums, n, x);
        return{floor, ceil};
    }
};