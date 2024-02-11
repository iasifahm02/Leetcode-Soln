class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Approach 1 - nlogn, n
        // set<int> st;
        // for(int i = 0; i < nums.size(); i++){
        //     st.insert(nums[i]);
        // }
        // int index = 0;
        // for(auto it: st){
        //     nums[index++] = it;
        // }
        // return index+1;

        //Approach 2 - two pointers 
        int i = 0;
        for(int j = 1; j < nums.size(); j++){
            if(nums[j] != nums[i]){
                nums[i+1] = nums[j];
                i++;
            }
        }
        return i+1;
    }
};