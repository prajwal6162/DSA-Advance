class Solution {
public:
    int singleNonDuplicate(vector<int> &nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            ans=nums[i] ^ ans;
        }
        return ans;
    }
};

/*
using XOR operation
a XOR 0 = a;
a XOR a = 0;
will cancel out each other. 
*/