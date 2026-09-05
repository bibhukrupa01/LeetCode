class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int r = 0, l = 0, count = 0;
        int prod = 1;

        if(k <= 1){
            return 0;
        }

        for(r = 0; r < n; r++){
            prod = prod * nums[r];

            while(prod >= k){
                prod = prod / nums[l];
                l++;
            }
            count = count + (r-l+1);
        }
        return count;

    }
};