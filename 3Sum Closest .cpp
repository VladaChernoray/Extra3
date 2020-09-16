class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int diff = INT_MAX;
        int temp = nums.size();
        sort(begin(nums), end(nums));

        for (int i = 0; i < temp && diff != 0; ++i) {
            for (int j = i + 1; j < temp - 1; ++j) {
                int comp = target - nums[i] - nums[j];
                auto up = upper_bound(begin(nums) + j + 1, end(nums), comp);

                int hi = up - begin(nums);
                int lo = hi - 1;

                if (hi < temp && abs(comp - nums[hi]) < abs(diff)) {
                    diff = comp - nums[hi];
                }
                if (lo > j&& abs(comp - nums[lo]) < abs(diff)) {
                    diff = comp - nums[lo];
                }
            }
        }
        return target - diff;
    }
};