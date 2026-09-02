class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        if (n > m) return false;

        string target = s1;
        sort(target.begin(), target.end());

        for (int i = 0; i <= m - n; i++) {
            string window = s2.substr(i, n);
            sort(window.begin(), window.end());
            if (window == target) return true;
        }

        return false;
    }
};