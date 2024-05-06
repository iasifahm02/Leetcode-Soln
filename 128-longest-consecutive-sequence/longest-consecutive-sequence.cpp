class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //Step 1: Sort the array
        sort(nums.begin(), nums.end());
        if(nums.size() == 0) return 0;
        int longest = 1, count = 0, lastSmaller = INT_MIN;
        int n = nums.size();
        for(int i = 0; i < n; i++){

            if(lastSmaller == nums[i]-1){
                count++;
                lastSmaller = nums[i];
            }
            else if(lastSmaller != nums[i]){ //Non-consecutive mil gaya
                count = 1;
                lastSmaller = nums[i];
            }
            longest = max(longest, count);
        }
        return longest;
    }
};