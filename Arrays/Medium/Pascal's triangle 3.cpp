class Solution {
    private:
        vector<int> generateRow(int row){
            long long ans=1;
            vector<int> temp;
            temp.push_back(ans);
            for(int i=1;i<row;i++){
                ans=ans*(row-i);
                ans=ans/i;
                temp.push_back(ans);
            }
            return temp;
        }
    public:
        vector<vector<int>> pascalTriangleIII(int n) {
            vector<vector<int>> result;
            for(int i=1;i<=n;i++){
                result.push_back(generateRow(i));
            }
            return result;
        }
    };