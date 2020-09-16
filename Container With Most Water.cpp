class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;
        int area = 0;
        int temp1 = 0;
        int temp2 = height.size() - 1;
        while (temp1 != temp2) {
            if (height[temp1] > height[temp2]) {
                area = (temp2 - temp1) * height[temp2];
                temp2--;
            }
            else {
                area = (temp2 - temp1) * height[temp1];
                temp1++;
            }
            if (area > max_area) {
                max_area = area;
            }
        }
        return max_area;
    }
};
