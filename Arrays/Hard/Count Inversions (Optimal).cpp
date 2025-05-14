class Solution {
private:
//implement mergesort and add count functinality;
    int merge(vector<int>& arr, int low, int mid, int high){
        vector<int> temp;
        long long int cnt=0;
        int left=low;
        int right=mid+1;

        while(left<=mid  && right<=high){
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                //main cnt logic
                cnt += (mid-left+1);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }

        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }

        for(int i=low;i<=high;i++){
            arr[i]=temp[i-low];
        }

        return cnt;
    }

    int mergeSort(vector<int>& arr, int low, int high){
        long long int cnt=0;
        if(low < high){
        int mid = (low+high)/2;
        cnt += mergeSort(arr, low, mid);
        cnt += mergeSort(arr, mid+1, high);
        cnt += merge(arr, low, mid, high);
        }
    return cnt;
    }
public:
   long long int numberOfInversions(vector<int> nums) {
        int n=nums.size()-1;
        return mergeSort(nums, 0, n);
    }
};