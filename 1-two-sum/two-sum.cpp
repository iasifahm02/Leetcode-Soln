class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        for(int i = 0; i < nums.size(); i++){
            int x = nums[i];
            int y = target - x;
            if(mpp.find(y) != mpp.end()){
                return {mpp[y], i};
            }
            mpp[x] = i;
        }
        return {-1, -1, 0};
    }
};