class Solution{
public:
    bool searchMatrix(vector<vector<int>> &mat, int target){
        //visually faltten the 2D matrix and apply binary search as done in 1D array
        int n=mat.size(), m=mat[0].size();
        int low=0;
        int high=(n*m)-1;
        while(low <= high){
            int mid=(low+high)/2;
            int i=mid/m; //row = mid/number of columns
            int j=mid%m; //column = mid%number of columns
            int k=mat[i][j];
            if(k==target) return true;
            else if(k<target) low=mid+1;
            else high=mid-1;
        }
        return false;
    }
};