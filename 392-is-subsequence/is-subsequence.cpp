class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()>t.size())
        return false;
        int start=0,first=0,count=0;
        while(start<s.size()&&first<t.size())
        {
            if(s[start]==t[first])
            {
                count++;
                start++,first++;
            }
            else
            first++;
        }   
        if(count==s.size())
        return true;
        else
        return false;
    }
};