class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        int n=nums.size();
        int hash[n+1]={0};
        for(int num : nums){
            hash[num]++;
        }
        int missing=-1, repeating=-1;
        for(int i=1;i<=n;i++){
            if(hash[i]==2) repeating=i;
            else if(hash[i] == 0) missing=i;
            if(missing != -1 && repeating != -1) break;
        }
        return{repeating, missing};
    }
};