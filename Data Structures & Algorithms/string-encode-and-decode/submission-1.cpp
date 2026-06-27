class Solution {
public:
    int c;
    string encode(vector<string>& strs) {
        int n = strs.size();
        c=n;
        string estrs;
        for(int i=0;i<n;i++)
        {
            estrs+=to_string(strs[i].size());
            estrs += "#";
            estrs += strs[i];
        }
        return estrs;
    }

    vector<string> decode(string s) {
        vector <string> ans ;
        int i =0;
        while(i<s.size()){
            int j = i;
            while(s[j]!= '#'){
                j++;
            }
            int len = stoi(s.substr(i,j-i));
            ans.push_back(s.substr(j+1,len));
            i= j+1+len;
        }


        return ans;

    }
};