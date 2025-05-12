class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        int n = nums.size();
        int missing=-1, repeating=-1;
        for(int i=1;i<=n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(i==nums[j]) count++;
            }
            if(count==2) repeating = i;
            else if(count==0) missing = i;
            if(missing != -1 && repeating != -1) break;
        }
        return {repeating, missing};
    }
};