class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;

        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target) return mid;
            else if(nums[0] <= nums[mid]){ //left part is sorted
                if(nums[0] <= target && target <= nums[mid]){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            else{ //right part is sorted
                if(nums[mid] <= target && target <= nums[nums.size()-1]){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }   
        }
        return -1;
    }
};