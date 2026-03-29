class Solution {
public:
    string reverseWords(string s) {
        vector<string>words;
        string ans;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            ans+=s[i];
            if(s[i]==' ' && ans!="")
            {
                words.push_back(ans);
                ans.clear();
            }
        }
        if(!ans.empty())
        words.push_back(ans);
        reverse(words.begin(),words.end());
        string result;
        for(int i=0;i<words.size();i++)
        {
            result+=words[i]+' ';
        }
        result.pop_back();
        return result;
    }
};