class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int sum = 0;
        while(left<right){
            //area = height * width
            int area = min(height[left], height[right]) * (right - left);
            sum = max(sum,area);

            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return sum;
    }
};