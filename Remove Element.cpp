class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        unsigned index{};
        while (index < nums.size()) {
            if (nums.at(index) == val)
                nums.erase(nums.begin() + index);
            else
                ++index;
        }
        return nums.size();

    }
};