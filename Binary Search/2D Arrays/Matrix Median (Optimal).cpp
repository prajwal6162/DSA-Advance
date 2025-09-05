class Solution{
private:
  int upperBound(vector<int>&matrix, int x, int m){
    // first index of element greater than x
    int low=0;
    int high=m-1;
    int ans=m;

    while(low <= high){
      int mid=(low+high)/2;

      if(matrix[mid]>x){
        ans=mid;
        high=mid-1;
      }
      else low=mid+1;
    }

    return ans;
  }

  int countSmallEqual(vector<vector<int>>&matrix, int n, int m, int x){ 
    int count=0;
    for(int i=0;i<n;i++){
      count += upperBound(matrix[i], x, m);
    }
    return count;
  }

public:
    int findMedian(vector<vector<int>>&matrix) {
      int n=matrix.size();
      int m=matrix[0].size();
      int low=INT_MAX;
      int high=INT_MIN;

      for(int i=0;i<n;i++){
        low=min(low, matrix[i][0]);
        high=max(high, matrix[i][m-1]);
      }

      int req=(m*n)/2; // median number of elements should be less than or equal to median

      while(low <= high){
        int mid=(low+high)/2;

        int smallEqual = countSmallEqual(matrix, n, m, mid); // count of elements less than or equal to mid

        if(smallEqual <= req) low=mid+1;
        else high=mid-1;
      }
    return low;
  }
};