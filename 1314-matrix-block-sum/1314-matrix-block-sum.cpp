class Solution {
public:
    vector<vector<int>> prefix;
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();
        prefix = vector<vector<int>>(m, vector<int>(n, 0));
        vector<vector<int>> ans(m, vector<int>(n));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n ; j++){
                prefix[i][j] = mat[i][j];

                if(i > 0){
                    prefix[i][j] += prefix[i-1][j];
                }
                if(j > 0){
                    prefix[i][j] += prefix[i][j-1];
                }
                if(i > 0 && j > 0){
                    prefix[i][j] -= prefix[i-1][j-1];
                }
            }
        }
        for(int i = 0; i < m; i++){
            for( int j = 0; j < n; j++){
                int r1 = max(i-k, 0);
                int c1 = max(j-k, 0);

                int r2 = min(i+k, m-1);
                int c2 = min(j+k, n-1);

                ans[i][j] = prefix[r2][c2];

                if(r1 > 0){
                    ans[i][j] -= prefix[r1-1][c2];
                }
                if(c1 > 0){
                    ans[i][j] -= prefix[r2][c1-1];
                }
                if(r1 > 0 && c1 > 0){
                    ans[i][j] += prefix[r1-1][c1-1];
                }
            }
        }
        return ans;
    }
};