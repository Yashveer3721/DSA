class Solution {
public:
    void generate(int open, int close, string &path, vector<string> &ans) {
        if(open>close || open<0) 
        return;
        if(open==0 && close==0)
        {
            ans.push_back(path);
            return ;
        }
        //push open parenthesis
        path.push_back('(');
        generate(open-1,close,path,ans);
        path.pop_back();
        //push close parenthesis
        path.push_back(')');
        generate(open,close-1,path,ans);
        path.pop_back();

    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        generate(n,n,temp,ans);
        return ans;
    }
};
