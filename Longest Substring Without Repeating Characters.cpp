class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int temp = 0;
        int max_length = 0;
        int curr = 0;
        for (int i = 0; i < s.length(); i++) {
            for (int j = i - 1; j >= temp; --j) {
                temp = (s[i] == s[j]) ? temp = j + 1 : temp;
            }
            curr = i - temp + 1;
            max_length = (curr > max_length) ? curr : max_length;
        }
        return max_length;
    }
};
