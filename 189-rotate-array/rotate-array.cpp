#include<bits/stdc++.h>
class Solution {
private:
    void reverse(vector<int> &arr, int start, int end){
        while(start < end){
            swap(arr[start++], arr[end--]);
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
        // int n = nums.size();
        // vector<int> temp(n);
        // for(int i = 0; i < n; i++){
        //     temp[(k+i)%n] = nums[i]; //Rotated towards right
        //     // (n-k+i)%n > Rotated towards left
        // }
        // nums = temp;

        //Optimal approach
        int n = nums.size();
        k = k%n;
        //Reverse first k elements
        reverse(nums, 0, n-k-1);
        //Reverse another n-k elements
        reverse(nums, n-k, n-1);
        //Reverse whole array
        reverse(nums, 0, n-1);
    }
};