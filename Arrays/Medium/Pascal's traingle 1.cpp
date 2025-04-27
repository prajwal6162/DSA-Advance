class Solution {
    public:
        int pascalTriangleI(int r, int c) {
            long long res=1;
            if(r==1) return r;
            //using nCr
            r=r-1, c=c-1;
            for(int i=0;i<c;i++){
                res=res*(r-i);
                res=res/(i+1);
            }
            return res;
        }
    };