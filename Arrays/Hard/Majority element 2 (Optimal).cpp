class Solution {
public:
    vector<int> majorityElementTwo(vector<int>& nums) {
        int n=nums.size();
        int count1=0, count2=0;
        int ele1=INT_MIN, ele2=INT_MIN;
        
        for(int i=0;i<n;i++){
            if(count1==0 && ele2 != nums[i]){
                count1=1;
                ele1=nums[i];
            }
            else if(count2==0 && ele1 != nums[i]){
                count2=1;
                ele2=nums[i];
            }
            else if(ele1==nums[i]) count1++;
            else if(ele2==nums[i]) count2++;
            else{
                count1--;
                count2--;
            }
        }
        
        vector<int> result;
        int cnt1=0, cnt2=0;
        for(int j=0;j<n;j++){
            if(ele1==nums[j]) cnt1++;
            else if(ele2==nums[j]) cnt2++;
        }
        int mini= (n/3)+1;
        if(cnt1 >= mini) result.push_back(ele1);
        if(cnt2 >= mini) result.push_back(ele2);
        sort(result.begin(), result.end());
        return result;
    }
};