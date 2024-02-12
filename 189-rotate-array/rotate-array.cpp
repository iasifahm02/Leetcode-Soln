class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;

        // //Approach 1 - Brute force, Tc = O(n+k) | Sc = O(k)
        // vector<int> temp;
        // for(int i = 0; i < n-k; i++){
        //     temp.push_back(nums[i]);
        // }
        // for(int i = n-k; i < n; i++){
        //     nums[i-(n-k)] = nums[i];
        // }
        // for(int i = k; i < n; i++){
        //     nums[i] = temp[i-k];
        // }

        //Approach 2 - Better approach, Time and space both O(n)
        vector<int> temp(n);
        for(int i = 0; i < n; i++){
            temp[(i+k)%n] = nums[i];
        }
        for(int i = 0; i < n; i++){
            nums[i] = temp[i];
        }
    }
};