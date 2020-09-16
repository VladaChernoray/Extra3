class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec = nums1;

        for (int num : nums2)
            vec.push_back(num);

        sort(vec.begin(), vec.end());

        if ((nums1.size() + nums2.size()) % 2)
            return vec[(nums1.size() + nums2.size()) / 2];
        else
            return (vec[(nums1.size() + nums2.size()) / 2] + vec[(nums1.size() + nums2.size()) / 2 - 1]) / 2.0;
    }
};