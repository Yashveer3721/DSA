class Solution {
public:
    string longestPrefix(string s) {
        vector<int>lps(s.size(),0);
        int pre=0,suf=1;
        while(suf<s.size())
        {
            if(s[pre]==s[suf])
            {
                lps[suf]=pre+1;
                pre++,suf++;
            }
            else
            {
                if(pre==0)
                suf++;
                else
                pre=lps[pre-1];
            }
        }
        int m=lps[s.size()-1];
        if(m==0)
        return "";
       else
       {
           string ans;
           for(int i=0;i<m;i++)
           {
               ans.push_back(s[i]);
           }
           return ans;
       }
    }
};