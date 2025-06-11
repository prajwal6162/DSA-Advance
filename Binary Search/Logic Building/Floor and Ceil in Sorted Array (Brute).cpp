class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int floor=-1, ceil=-1;
        for(int num : nums){
            if(num <= x && floor < num){
                floor=num;
            }
            if(num >= x && (ceil==-1 || num < ceil)){
                ceil=num;
            }
        }
        return {floor, ceil};
    }
};