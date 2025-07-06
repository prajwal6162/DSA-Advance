class Solution {
private: 
  int Pow(int mid, int N, int M){
    long long ans=1;
    for(int i=1;i<=N;i++){
      ans=ans*mid;
      if(ans>M) return 1;
    }
    if(ans==M) return 2;
    return 0;
  }
public:
  int NthRoot(int N, int M) {
       int low=1;
       int high=M;
       while(low <= high){
        int mid=(low+high)/2;
        int ans=Pow(mid, N, M);
        if(ans==2) return mid;
        else if(ans==1) high=mid-1;
        else low=mid+1;
      }
      return -1;
    }
};
