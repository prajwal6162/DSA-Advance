class Solution{
private:
 int recursive(vector<int> &nums, int low, int high, int target){
    if(low > high) return -1;
    int ind;
    int mid=(low+high)/2;
    if(nums[mid] == target) return mid;
    else if(nums[mid] >  target){
         ind = recursive(nums, low, mid-1, target);
    }
    else {
         ind = recursive(nums, mid+1, high, target);
    }
    return ind;
 }
public:
    int search(vector<int> &nums, int target){
     int n=nums.size();
      return recursive(nums, 0, n-1, target);
    }
};