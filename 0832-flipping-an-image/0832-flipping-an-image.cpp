class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int m = image.size();
        int n = image[0].size();

        for(int i = 0; i < m; i++){
            int left = 0;
            int right = n - 1;

            while(left <= right){

                // flipping and reversing
                swap(image[i][left], image[i][right]);
                image[i][left] = 1 - image[i][left];

                if(left != right){
                    image[i][right] = 1 - image[i][right];
                }
                left++;
                right--;
            }
        }
        return image;
    }
};