class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> count(26, 0);
        vector<int> count2(26, 0);
        for (char c : s1) {
            count[c - 'a']++;
        }
        int k = s1.size();
        for (int i = 0; i < s2.size(); i++) {
            count[s2[i] - 'a']--;
            if (i >= k) {
                count[s2[i - k] - 'a']++;
            }
            if (count == count2) {
                return true;
            }
        }
        return false;
    }
};