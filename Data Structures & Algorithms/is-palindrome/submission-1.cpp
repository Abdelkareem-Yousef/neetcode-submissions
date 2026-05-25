class Solution {
public:
    bool isPalindrome(string s) {
        int j=s.length()-1;
        int i =0;
        while(true){
            if(j<=i) return true;
            if(!isalnum(s[i])){i++;continue;}
            if(!isalnum(s[j])){j--;continue;}
            if(tolower(s[i]) != tolower(s[j]))return false;
            i++;
            j--;
        }
        
    }
};