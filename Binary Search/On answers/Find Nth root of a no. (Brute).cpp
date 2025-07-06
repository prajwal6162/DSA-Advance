class Solution {
private:
  long long Pow(int b, int exp){
    long long answer=1;
    long long base=b;
    while(exp > 0){
      if(exp%2){
        exp--;
        answer=answer*base;
      }
      else{
        exp/=2;
        base=base*base;
      }
    }
  return answer;
  }
public:
  int NthRoot(int N, int M) {
       for(int i=0;i<=M;i++){
        long long  ans=Pow(i, N);
        if(ans== M*1ll) return i;
        else if(ans >= M*1ll){
          break;
        }
       }
      return -1;
    }
};
//using linear search;