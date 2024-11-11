class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maximumAmountOfWater = 0;
        while (left < right) {
            int amountOfWater = std::min(height[left], height[right]) * (right - left);
            maximumAmountOfWater = std::max(maximumAmountOfWater, amountOfWater);
            if (height[left] < height[right]) {
                ++left;
            } else {
                --right;
            }
        }
        return maximumAmountOfWater;
    }
};