class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int id = 0;
        int num = 0;
        int len = 0;
        if (strs.empty())
            return "";
        string temp;
        string common = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            len = min(common.length(), strs[i].length());
            if (len != common.length()) {
                common = strs[i];
            }
        }
        while (id < len) {
            for (int j = 0; j < strs.size() - 1; j++) {
                if (strs[j][id] != strs[j + 1][id]) {
                    temp = strs[0].substr(0, num);
                    return temp;
                }
            }
            num += 1;
            id += 1;
        }
        temp = common;
        return temp;
    }
};