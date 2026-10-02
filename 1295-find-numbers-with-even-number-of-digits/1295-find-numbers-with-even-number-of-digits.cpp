class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;

        for(int i = 0; i < nums.size(); i++){
            int n = nums[i];
            int digit = 0;

            while(n > 0){
                digit ++;
                n = n / 10;
            }
            if((digit % 2) == 0){
                ans++;
            }
        }
        return ans;
    }
};