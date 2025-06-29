class Solution{
private:
    int lowerBound(vector<int> &nums, int target, int n){
        int ans=n;
        int low=0;
        int high=n-1;
        while(low <= high){
            int mid=(low+high)/2;
            if(nums[mid] >= target){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }

    int upperBound(vector<int> &nums, int target, int n){
        int ans=n;
        int low=0;
        int high=n-1;
        while(low <= high){
            int mid=(low+high)/2;
            if(nums[mid] > target){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }

public:
    vector<int> searchRange(vector<int> &nums, int target) {
        int n=nums.size();
        int lb = lowerBound(nums, target, n);
        if(lb == n || nums[lb] != target) return {-1, -1};
        int ub = upperBound(nums, target, n);
        
        return {lb, ub-1};
    }
};