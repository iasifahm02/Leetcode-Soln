class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int, int> mpp;
        for(int i = 0; i < arr.size(); i++){
            mpp[arr[i]]++;
        }

        int ans = 0;
        for(auto it: mpp){
            float num = it.second;
            float den = arr.size();
            float x = num/den;
            if(x > 0.25){
                ans = it.first;
            }
        }
        return ans;
    }
};