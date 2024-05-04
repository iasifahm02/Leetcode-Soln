class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //Step 1: Find the break point
        int index = -1, n = nums.size();
        for(int i = n-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                index = i;
                break;
            }
        }
        if(index == -1){
            reverse(nums.begin(), nums.end());
            return;
        }

        //Step 2: find > 1, smallest-maxium num & swap
        for(int i = n-1; i >= index; i--){
            if(nums[i] > nums[index]){
                swap(nums[i], nums[index]);
                break;
            }
        }

        //Step 3: Reverse after index element
        reverse(nums.begin()+index+1, nums.end());
    }
};