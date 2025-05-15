class Solution {
private:
    void merge(vector<int>& nums, int low, int mid, int high){
        vector<int> temp;
        int left=low;
        int right=mid+1;
        while(left<=mid && right<=high){
            if(nums[left] <= nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }
        }
    
        while(left<=mid){
                temp.push_back(nums[left]);
                left++;
            }   

        while(right<=high){
                temp.push_back(nums[right]);
                right++;
            }

      for(int i=low;i<=high;i++){
        nums[i]=temp[i-low];
    }
}

private:
    int countpairs(vector<int>& nums, int low, int mid, int high){
        int right=mid+1;
        int count=0;
        for(int i=low;i<=mid;i++){
            //count logic while checking condition
            while(right<=high && nums[i] > 2*nums[right]) right++;
            count+= (right - (mid+1));
        }
        return count;
}

private:
    int mergeSort(vector<int>& nums, int low, int high){
        int count=0;
        if(low>=high) return count;
        { 
            int mid=(low+high)/2;
            count+=mergeSort(nums, low, mid);
            count+=mergeSort(nums, mid+1, high);
            count+=countpairs(nums, low, mid, high);
            merge(nums, low, mid, high);
            return count;
        }
}

public:
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        int count=mergeSort(nums, 0, n-1);
        return count;
    }
};