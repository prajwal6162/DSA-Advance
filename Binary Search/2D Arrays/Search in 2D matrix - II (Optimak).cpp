class Solution{
    //most optimal approach not directly applying binary search
    //time complexity O(m+n)
public:
 bool searchMatrix(vector<vector<int>> &matrix, int target){
    int n=matrix.size();
      int row=0;
      int col=matrix[0].size()-1;
      while(row<n && col>=0){
        int k=matrix[row][col];
        if(k==target) return true;
        else if(k>target) col--;
        else row++;
      }
      return false;
    }
};