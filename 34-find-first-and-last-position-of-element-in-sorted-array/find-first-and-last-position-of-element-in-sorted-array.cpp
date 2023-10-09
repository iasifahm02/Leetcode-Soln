class Solution {
private:
    int firstPosition(vector<int> nums, int target){
        int low = 0;
        int high = nums.size()-1;
        int ans = -1;

        while(low <= high){
            int mid = low + (high-low)/2;

            if(nums[mid] == target){
                ans = mid;
                high = mid-1;
            }
            else if(target > nums[mid]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
    }

    int lastPosition(vector<int> nums, int target){
        int low = 0;
        int high = nums.size()-1;
        int ans = -1;

        while(low <= high){
            int mid = low + (high-low)/2;

            if(nums[mid] == target){
                ans = mid;
                low = mid+1;
            }
            else if(target > nums[mid]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(firstPosition(nums, target));
        ans.push_back(lastPosition(nums, target));
        return ans;
    }
};