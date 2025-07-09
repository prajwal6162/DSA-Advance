class Solution {
private:
    int countStudents(vector<int> &nums, int pages){
        int n=nums.size();
        int student=1;
        int countpages=0;
        for(int i=0;i<n;i++){
            if(countpages+nums[i] <= pages){
                countpages+=nums[i];
            }
            else {
                student++;
                countpages=nums[i];
            }
        }
        return student;
    }
public:
    int findPages(vector<int> &nums, int m)  {
        int n=nums.size();
        if(m>n) return -1;
        int low= *max_element(nums.begin(), nums.end());
        int high=accumulate(nums.begin(), nums.end(), 0);
        while(low <= high){
            int mid=(low+high)/2;
            int students=countStudents(nums, mid);
            if(students > m) low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};