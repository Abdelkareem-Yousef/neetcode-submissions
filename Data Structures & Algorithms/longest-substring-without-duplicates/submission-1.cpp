class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans =0;
        int left = 0;
        set <int> st;
        for (int right =0;right < s.size();right++){
            while(st.find(s[right]) != st.end()){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            ans = max(right - left +1,ans);
        }
            

        return ans;
    }
};
