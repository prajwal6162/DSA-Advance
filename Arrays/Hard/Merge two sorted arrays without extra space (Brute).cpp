class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //using an extra array and then Inserting the elements in nums1;
        vector<int> temp(m+n);
        int left=0;
        int right=0;
        int index=0;

        while(left<m && right<n){
            if(nums1[left] <= nums2[right]){
                temp[index]=nums1[left];
                index++;
                left++;
            }
            else{
                temp[index]=nums2[right];
                index++;
                right++;
            }
        }
        while(left<m){
            temp[index]=nums1[left];
            index++;
            left++;
        }
        while(right<n){
            temp[index]=nums2[right];
            index++;
            right++;
        }
        for(int i=0;i<m+n;i++){
            nums1[i]=temp[i];
        }
    }
};