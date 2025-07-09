class Solution {
private: 
    int countStudents(vector<int> &nums, int pages){
        int student=1;
        int pagecount=0;
        for(int i=0;i<nums.size();i++){
            if(pagecount + nums[i] <= pages){
                pagecount+=nums[i];
            }
            else{
                student++;
                pagecount=nums[i];
            }
        }
        return student;
    }
public:
    int findPages(vector<int> &nums, int m)  {
        int n=nums.size();
        if(m>n) return -1;
        int low = *max_element(nums.begin(), nums.end());
        int high= accumulate(nums.begin(), nums.end(), 0);
        for(int pages=low;pages<=high;pages++){
            if(countStudents(nums, pages)==m) return pages;
        }
        return low;
    }
};