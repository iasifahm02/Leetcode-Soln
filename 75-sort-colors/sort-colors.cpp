class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Brute force - Sort the array
        //Better Approach - Store count & overwrite
        //Optimal Approach - Dutch National flag Algo
        int low = 0, mid = 0, high = nums.size()-1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++, mid++;
            }
            else if(nums[mid] == 1) mid++;
            else{ // If nums[mid] = 2
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};