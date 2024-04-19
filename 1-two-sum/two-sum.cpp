class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        for(int i = 0; i < nums.size(); i++){
            int number = nums[i]; //2
            int anotherNum = target - nums[i]; //9-2 = 7
            if(mpp.find(anotherNum) != mpp.end()){
                return {i, mpp[anotherNum]};
            }
            mpp[number] = i; //save num with index
        }
        return {-1, -1}; //not exist
    }
};