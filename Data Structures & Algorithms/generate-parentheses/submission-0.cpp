class Solution {
public:
    vector <string> ans;
    void backtrack(int counter,int cr,int cl, int n, string st){
        if(cl>cr || cl>n || cr>n)return;
        if(counter==n*2){
            ans.push_back(st);
            return;
        }
        backtrack(counter+1,cr+1,cl,n,st+"(");
        backtrack(counter+1,cr,cl+1,n,st+")");
    }

    vector<string> generateParenthesis(int n) {

        backtrack(0,0,0,n,"");
        return ans;
        
    }
};
