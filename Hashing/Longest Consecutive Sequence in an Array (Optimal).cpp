class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        unordered_set<int> st;
        int longest=1;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }

        for(auto itr : st){
            if(st.find(itr-1) == st.end()){
                int count=1;
                int x=itr;

                while(st.find(x+1) != st.end()){
                    x=x+1;
                    count=count+1;
                }
                longest= max(longest, count);
            }
        }
        return longest;
    }
};