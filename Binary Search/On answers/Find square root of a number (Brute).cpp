class Solution {
public:
    long long floorSqrt(long long n)  {
      long long ans=0;
      for(long long i=0;i<=n;i++){
        int value = i*i;
        if(value<=n*1ll){
            ans=i;
        }
        else{
            break;
        }
      }
      return ans;
    }
};

//using linear search;