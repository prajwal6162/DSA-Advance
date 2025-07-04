//using binary search

class Solution {
public:
    long long floorSqrt(long long n)  {
      typedef long long ll;
      ll low=1;
      ll high=n;
      ll ans=0;
      while(low <= high){
        ll mid=(low+high)/2;
        if((mid*mid) <=n){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
      }
      return ans;
    }
};