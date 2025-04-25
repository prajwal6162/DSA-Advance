class Solution {
    public:
        vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
            vector<int> ans;
            int n=nums1.size();
            int m=nums2.size();
            int visited[m]={0};
    
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(nums1[i] == nums2[j] && visited[j]==0){
                        ans.push_back(nums1[i]);
                        visited[j]=1;
                    }
                }
            }
            return ans;
        }
    };