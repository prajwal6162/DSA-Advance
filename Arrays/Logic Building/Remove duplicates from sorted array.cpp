class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int n=nums.size();
            set<int> st;
            for(auto i:nums){
                st.insert(i);
            }
    
            int k=st.size();
            int index=0;
            for(auto itr:st){
                nums[index]=itr;
                index++;
            }
            return k;
        }
    };