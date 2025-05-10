class Solution {
public:
    // Function to find majority elements in an array
    vector<int> majorityElementTwo(vector<int>& nums) {
        
        // Size of the array
        int n = nums.size(); 
        
        // List of answers
        vector<int> result;
        
         for (int i = 0; i < n; i++) {
             
        /*Checking if nums[i] is not 
        already part of the answer*/
        if (result.size() == 0 || result[0] != nums[i]) {
            
            int cnt = 0;
            
            for (int j = 0; j < n; j++) {
                // counting the frequency of nums[i]
                if (nums[j] == nums[i]) {
                    cnt++;
                }
            }

            // check if frquency is greater than n/3:
            if (cnt > (n / 3))
                result.push_back(nums[i]);
        }
        
        //if result size is equal to 2 break out of loop
        if (result.size() == 2) break;
    }
    
    //return the majority elements
    return result;
    }
};