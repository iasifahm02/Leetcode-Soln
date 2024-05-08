class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int rows = matrix.size();
        int cols = matrix[0].size();

        int startingRow = 0, startingCol = 0;
        int endingRow = rows-1, endingCol = cols-1;
        int count = 0;

        while(count < rows*cols){
            //Step 1 - Print kardo StartingRow
            for(int i = startingCol; count < rows*cols && i <= endingCol; i++){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;

            //Step 2 - Print kardo EndingCol
            for(int i = startingRow; count < rows*cols && i <= endingRow; i++){
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;

            //Step 3 - Print kardo EndingRow
            for(int i = endingCol; count < rows*cols && i >= startingCol; i--){
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;

            //Step 4 - Print kardo StartingCol
            for(int i = endingRow; count < rows*cols && i >= startingRow; i--){
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }

        return ans;
    }
};