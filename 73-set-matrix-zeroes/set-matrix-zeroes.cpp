class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int n = arr.size(); //Total row
        int m = arr[0].size();  //Total col

        int *rows = new int[n]; // Array for rows, to keep track
        int *cols = new int[m]; //Array for cols, to keep track

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(arr[i][j] == 0){
                    rows[i] = 1;
                    cols[j] = 1;
                }
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(rows[i] == 1 || cols[j] == 1){
                    arr[i][j] = 0;
                }
            }
        }
    }
};