class Solution{
private:
    bool binarySearch(vector<int> &mat, int target){
        int low=0;
        int high=mat.size()-1;
        while(low <= high){
            int mid=(low+high)/2;
            if(mat[mid] == target) return true;
            else if(mat[mid]<target) low=mid+1;
            else high=mid-1;
        }
        return false;
    }
public:
    bool searchMatrix(vector<vector<int>> &mat, int target){
        int n=mat.size();
        int m=mat[0].size();
        if(n==0 || m==0) return false;
        for(int i=0;i<n;i++){
            if(mat[i][0]<=target && target<=mat[i][m-1]){
                return binarySearch(mat[i], target);
            }
        }
        return false;
    }
};