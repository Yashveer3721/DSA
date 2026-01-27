class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(isalnum(s[i]))
            {
                ans.push_back(tolower(s[i]));
            }
        }
        int start=0,end=ans.size()-1;
        while(start<end)
        {
            if(ans[start]!=ans[end])
            {
                return false;
            }
            start++,end--;
        }
        return true;
    }
};