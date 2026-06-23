class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string t="";
        for ( int i = 0;i<n;i++){
                if(isalnum(s[i])){
                        t += tolower(s[i]);
                }
        }
        string y =t;
         reverse(t.begin(),t.end());

        return (t == y)? true : false;
    }
};
