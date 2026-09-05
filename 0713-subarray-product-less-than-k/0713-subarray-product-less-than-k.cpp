class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int r = 0, l = 0, prod = 1;
        int count = 0;
        if(k <= 1){
            return 0;
        }

        for(r = 0; r < nums.size(); r++){
            prod = prod * nums[r];

            while(prod >= k){
                prod = prod / nums[l];
                l++;
            }
            count = count + ( r - l + 1);
        }
        return count;
    }
};