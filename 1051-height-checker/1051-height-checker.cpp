class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count[101] = {0};

        for(int i = 0; i < heights.size(); i++){
            count[heights[i]] ++;
        }
        int expected = 0;
        int ans = 0;

        for(int i = 0; i < heights.size(); i++){
            while(count[expected] == 0){
                expected ++;
            }
            if(heights[i] != expected){
                ans ++;
            }
            count[expected] --;
        }
        return ans;
    }
};