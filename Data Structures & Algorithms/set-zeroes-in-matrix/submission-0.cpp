class Solution { 
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int row = matrix.size();
        int col = matrix[0].size();

        vector<bool> rowValue(row, false);
        vector<bool> colsValue(col, false);

        for(int i=0; i<row; i++) {
            for(int j=0; j<col; j++) {
                if(matrix[i][j] == 0) {
                    rowValue[i] = true;
                    colsValue[j] = true;
                }
            }
        }


        for(int i=0; i<row; i++) {
            for(int j=0; j<col; j++) {
                if(rowValue[i] == true || colsValue[j] == true) {
                    matrix[i][j] = 0;
                }
            }
        } 
    }
};