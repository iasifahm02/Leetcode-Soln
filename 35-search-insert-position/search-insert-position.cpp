class Solution {
private:
    int BS(vector<int>& nums, int low, int high, int ans, int target){
        if(low > high){
            return ans;
        }

        int mid = low+(high-low)/2;
        if(nums[mid] >= target){
            return BS(nums, low, mid-1, mid, target);
        }
        else{
            return BS(nums, mid+1, high, ans, target);
        }
    }

public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        int ans = nums.size();

        return BS(nums, low, high, ans, target);

        // while(low <= high){
        //     int mid = low+(high-low)/2;
        //     if(nums[mid] >= target){
        //         ans = mid;
        //         high = mid-1;
        //     }
        //     else{
        //         low = mid+1;
        //     }
        // }
        // return ans;
    }
};