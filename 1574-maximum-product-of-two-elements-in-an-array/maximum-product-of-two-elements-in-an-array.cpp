class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int max = nums[n-1];
        int secMax  = nums[n-2];
        return (max-1)*(secMax-1);
    }
};