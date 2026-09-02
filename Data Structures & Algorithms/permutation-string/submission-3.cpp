class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        if (n > m) return false;

        vector<int> diff(26, 0);
        for (char c : s1) diff[c - 'a']--;

        for (int i = 0; i < n; i++) diff[s2[i] - 'a']++;

        if (all_of(diff.begin(), diff.end(), [](int x){ return x == 0; }))
            return true;

        for (int i = n; i < m; i++) {
            diff[s2[i] - 'a']++;
            diff[s2[i - n] - 'a']--;

            if (all_of(diff.begin(), diff.end(), [](int x){ return x == 0; }))
                return true;
        }

        return false;
    }
};