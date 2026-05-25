class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";
        for (int i = 0; i < s.length(); i++) {
            if (isalnum(s[i])) {          
                t += tolower(s[i]);
            }
        }
        string y = t;                   
        reverse(y.begin(), y.end());     
        return t == y;
    }
};