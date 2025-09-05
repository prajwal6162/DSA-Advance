class Solution {
private:
  int maxElement(vector<vector<int>>& mat, int mid){
    int max_val=INT_MIN;
    int index=-1;
    for(int i=0;i<mat.size();++i){
      if(mat[i][mid]>=max_val){
        max_val=mat[i][mid];
        index=i;
      }
    }
    return index;
  }
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
    int n=mat.size();
    int m=mat[0].size();
    int low=0;
    int high=m-1;
    while(low <= high){
      int mid=(low+high)/2;

      int row=maxElement(mat, mid);

      int left=mid-1 >=0 ? mat[row][mid-1] : -1;
      int right=mid+1<m ? mat[row][mid+1] : -1;

      if(mat[row][mid]>=left && right<=mat[row][mid]) return{row, mid};
      else if(mat[row][mid]<left) high=mid-1;
      else low=mid+1;
    }
    return {-1, -1};
  }
};