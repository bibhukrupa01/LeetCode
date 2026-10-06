class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int ans = 0;

        // top view
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] > 0){
                    ans++;
                }
            }
        }

        // front view
        for(int i = 0; i < n; i++){
            int maxi = 0;

            for(int j = 0; j < n; j++){
                maxi = max(maxi, grid[i][j]);
            }
            ans += maxi;
        }

        //side view
        for(int j = 0; j < n; j++){
            int maxi = 0;

            for(int i = 0; i < n; i++){
                maxi = max(maxi, grid[i][j]);
            }
            ans += maxi;
        }

        return ans;
    }
};