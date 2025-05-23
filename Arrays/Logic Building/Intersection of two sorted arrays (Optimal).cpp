class Solution {
    public:
        vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
            vector<int> ans;
            int n=nums1.size();
            int m=nums2.size();
            int i=0, j=0;
    
            while(i<n && j<m){
                if(nums1[i] < nums2[j]) i++;
                else if(nums1[i] > nums2[j]) j++;
                else{
                    ans.push_back(nums1[i]);
                    i++;
                    j++;
                }
            }
            return ans;
        }
    };