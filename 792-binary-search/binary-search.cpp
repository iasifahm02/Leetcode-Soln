class Solution {
private:
    int BS(vector<int> nums, int start, int end, int target){
        //Base Case
        if(start > end){
            return -1;
        }

        //1 Case Solve, baaki recursion smbhal lega
        int mid = start + (end-start)/2;
        if(nums[mid] == target) return mid;
        else if(target > nums[mid]) 
            return BS(nums, mid+1, end, target);
        else 
            return BS(nums, start, mid-1, target);
    }
public:
    int search(vector<int>& nums, int target) {
        return BS(nums, 0, nums.size()-1, target);
    }
};