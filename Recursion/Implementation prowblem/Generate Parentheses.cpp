class Solution {
private:
    void parenthesis(int open, int close, int n, string s, vector<string> &ans){
        if(open==close && (open+close == 2*n)){
            ans.push_back(s);
            return;
        }

        if(open < n){
            parenthesis(open+1, close, n, s+'(', ans);
        }

        if(close < open){
            parenthesis(open, close+1, n, s+')', ans);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;

        parenthesis(0, 0, n, "", ans);
        return ans;
    }
};