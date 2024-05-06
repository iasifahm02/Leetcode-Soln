class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        int longest = 1;
        unordered_set<int> st;
        for(int i = 0; i < n; i++){
            st.insert(nums[i]); // O(1)
        }

        for(auto it: st){
            int count = 1;
            if(st.find(it-1) == st.end()){ //Found starting no.
                int x = it;
                while(st.find(x+1) != st.end()){ //next no. found
                    x = x+1;
                    count++;
                }
                longest = max(longest, count);
            }
        }
        return longest;
    }
};