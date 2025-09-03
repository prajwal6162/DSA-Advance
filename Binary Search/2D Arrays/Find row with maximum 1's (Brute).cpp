class Solution {
  public:   
  int rowWithMax1s(vector < vector < int >> & mat) {
    int n=mat.size();
    int m=mat[0].size();
    int index=-1;
    int max_count=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<m;j++){
            count+=mat[i][j];
        }
        if(count > max_count){
            max_count=count;
            index=i;
        }
    }
    return index;
  }
};