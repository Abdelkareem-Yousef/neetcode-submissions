class Solution {
public:
    vector <string> ans;
    void backtrack(int cr,int cl, int n, string st){
        if(cl>cr || cl>n || cr>n)return;
        if(cr+cl==n*2){
            ans.push_back(st);
            return;
        }
        backtrack(cr+1,cl,n,st+"(");
        backtrack(cr,cl+1,n,st+")");
    }

    vector<string> generateParenthesis(int n) {

        backtrack(0,0,n,"");
        return ans;
        
    }
};
