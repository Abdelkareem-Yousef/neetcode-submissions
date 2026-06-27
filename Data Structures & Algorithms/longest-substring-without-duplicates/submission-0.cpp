class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int counter = 1;
        int ans =0;
        int n = s.size();
        for(int i = 0 ; i <n;i++){
            set <int> st;
            st.insert(s[i]);
            counter =1;
            int j=i+1;
            while(j< n && st.find(s[j])==st.end() ){
                st.insert(s[j]);
                counter++;
                j++;
            }
            ans = max(counter,ans);

        }
        return ans;
    }
};
