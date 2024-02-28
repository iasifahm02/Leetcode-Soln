class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        
        if(n == 1) return nums[0]; // nums has 1 element
        if(nums[0] != nums[1]) return nums[0]; //1st element is unique
        if(nums[n-1] != nums[n-2]) return nums[n-1]; //last element is unique

        int low = 1, high = n-2;
        while(low <= high){
            int mid = low+(high-low)/2;

            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]) return nums[mid]; //Unique element is found

            //Elemination begin
            if( (mid%2 == 1 && nums[mid] == nums[mid-1]) || (mid%2==0 && nums[mid] == nums[mid+1])){
                //I'm on left half, unique element is in right half
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return -1;
    }
};