class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int totalCount = m * n;

        int startingRow = 0;
        int endingCol = n - 1;
        int endingRow = m - 1;
        int startingCol = 0;
        
        int count = 0;
        while(count < totalCount) {
            //print starting row
            for(int i = startingCol; i <= endingCol && count < totalCount; i++) {
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;

            //print ending column
            for(int i = startingRow; i <= endingRow && count < totalCount; i++) {
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;

            //print ending row
            for(int i = endingCol; i >= startingCol && count < totalCount; i--) {
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;

            //print starting column
            for(int i = endingRow; i >= startingRow && count < totalCount; i--) {
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};