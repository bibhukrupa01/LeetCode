class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<int> rowTrack(r,0);
        vector<int> colTrack(c,0);
        int i, j;

        for(i = 0; i < r; i++){
            for(j = 0; j < c; j++){
                if(matrix[i][j] == 0){
                    rowTrack[i] = -1;
                    colTrack[j] = -1;
                }
            }
        }
        for(i = 0; i < r; i++){
            for(j = 0; j < c; j++){
                if(rowTrack[i] == -1 | colTrack[j] == -1){
                    matrix[i][j] = 0;
                }
            }
        }
    }     
};