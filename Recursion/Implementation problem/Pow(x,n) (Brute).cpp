class Solution {
public:
//Brute Force
// Time Complexity: O(n) where n is the exponent
// Space Complexity: O(1) as we are using constant space   
    double myPow(double x, int n) {
        if(n==0 || x==1.0) return 1;
        long long num = n;

        if(n<0){
            x=1/x;
            num=-1*1LL*n;
        }

        double ans=1;
        for(long long i=0;i<num;++i){
            ans*=x;
        }
        return ans;
    }
};