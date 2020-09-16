class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        int temp = 0;

        for (int i = 1; i < nums.size(); i++) {

            if (nums[temp] != nums[i]) {
                nums[++temp] = nums[i];
            }
        }
        return temp + 1;

    }
};