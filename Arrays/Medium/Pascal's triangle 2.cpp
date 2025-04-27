class Solution {
    public:
        vector<int> pascalTriangleII(int r) {
            vector<int> result;
            int ans=1;
            result.push_back(ans);
            for(int i=1;i<r;i++){
                ans=ans*(r-i);
                ans=ans/i;
                result.push_back(ans);
            }
            return result;
        }
    };