class Solution {
public:
    string longestPalindrome(string s) {
        int i = 0, j = s.size();
        if (s == "")
            return "";
        string rt = s.substr(0, 1);
        for (int i = 0; i < j - rt.size() / 2; i++) {
            int t = 1;
            while (i >= t && t < j - i && s[i - t] == s[i + t])
                t++;
            rt = (rt.size() < 2 * t - 1) ? rt = s.substr(i - t + 1, 2 * t - 1) : rt;
            t = 0;
            while (i >= t && t < j - i - 1 && s[i - t] == s[i + 1 + t])
                t++;
            rt = (rt.size() < 2 * t) ? rt = s.substr(i - t + 1, 2 * t) : rt;
        }
        return rt;
    }
};