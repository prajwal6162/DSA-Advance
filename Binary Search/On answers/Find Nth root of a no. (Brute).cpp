class Solution {
public:
  int NthRoot(int N, int M) {
       for(int i=1;i<=M;i++){
        long long ans=pow(i,N);
        if(ans==M*1ll) return i;
        else if(ans > M*1ll) break;
       }
       return -1;
    }
};

//using linear search;