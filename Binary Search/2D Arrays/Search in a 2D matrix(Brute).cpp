class Solution{
public:
    bool searchMatrix(vector<vector<int>> &mat, int target){
        int n=mat.size();
        int m=mat[0].size();
        if(n==0 || m==0) return false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(target==mat[i][j]) return true;
            }
        }
        return false;
    }
};