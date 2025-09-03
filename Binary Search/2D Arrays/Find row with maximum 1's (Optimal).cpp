class Solution {
  public:   
  int rowWithMax1s(vector < vector < int >> & mat) {
    int n=mat.size();
    int m=mat[0].size();
    int index=-1;
    int max_count=0;
    for(int i=0;i<n;i++){
        auto itr = (lower_bound(mat[i].begin(), mat[i].end(), 1));
        int pos = itr - mat[i].begin();
        int one_count= (m - pos);
        if(one_count > max_count){
            max_count=one_count;
            index=i;
        }
    }
    return index;
  }
};