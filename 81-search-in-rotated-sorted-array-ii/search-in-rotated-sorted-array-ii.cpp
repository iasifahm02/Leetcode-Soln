class Solution {
private:
    int findPivot(vector<int> nums){
        int ans = 0;
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] > nums[i+1]){
                ans = i+1;
            }
        }
        return ans;
    }

    bool binarySearch(vector<int> nums, int start, int end, int target){
    
        int mid = start+(end-start)/2;

        while(start <= end){
            
            if(nums[mid] == target){
                return true;
            }

            if(nums[mid] < target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }

            mid = start+(end-start)/2;
        }

        return false;
    }
public:
    bool search(vector<int>& nums, int target) {
        int pivot = findPivot(nums);
        int n = nums.size();

        cout << "Pivot is at index : " << pivot << endl;

        if(nums[pivot] <= target && target <= nums[n-1]){ //line 2 pr search krlo
            return binarySearch(nums, pivot, n-1, target);
        }
        else{ //line 1 pr search krlo
            return binarySearch(nums, 0, pivot-1, target);
        }
    }
};