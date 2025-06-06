class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        map<int, int> mpp;
        int xr=0, count=0;
        mpp[xr]++;
        for(int num : nums){
            xr = xr ^ num;
            int x = xr ^ k;
            count += mpp[x];
            mpp[xr]++;
        }
        return count;
    }
};