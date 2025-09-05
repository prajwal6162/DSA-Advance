class Solution{
    //brute force approach
    //time complexity: O(n*m log(n*m))
public:
    int findMedian(vector<vector<int>>&matrix) {
      vector<int> flattened;
      for(auto& row : matrix){
        for(int itr : row){
          flattened.push_back(itr);
        }
      }
      sort(flattened.begin(), flattened.end());
      int n=flattened.size();
      return flattened[n/2];
    }
};