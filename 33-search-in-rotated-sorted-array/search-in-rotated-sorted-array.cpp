class Solution {
private:
    int findPivot(vector<int> nums){
        int s = 0;
        int e = nums.size()-1;
        int mid = s+(e-s)/2;

        while(s < e){

            if(nums[mid] >= nums[0]){
                s = mid+1;
            }
            else{
                e = mid;
            }

            mid = s+(e-s)/2;
        }

        return s;
    }

    int binarySearch(vector<int> nums, int start, int end, int target){
    
        int mid = start+(end-start)/2;

        while(start <= end){
            
            if(nums[mid] == target){
                return mid;
            }

            if(nums[mid] < target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }

            mid = start+(end-start)/2;
        }

        return -1;
    }

public:
    int search(vector<int>& nums, int target) {
        int pivot = findPivot(nums);
        int n = nums.size();

        if(nums[pivot] <= target && target <= nums[n-1]){ //line 2 pr search krlo
            return binarySearch(nums, pivot, n-1, target);
        }
        else{ //line 1 pr search krlo
            return binarySearch(nums, 0, pivot-1, target);
        }
    }
};