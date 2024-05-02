class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        int posIndex = 0, negIndex = 1;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){ //Number is positive, put it in posIndex
                ans[posIndex] = nums[i];
                posIndex += 2;
            }
            else{ //Number is negative, put it in negIndex
                ans[negIndex] = nums[i];
                negIndex += 2;
            }
        }
        return ans;
    }
};