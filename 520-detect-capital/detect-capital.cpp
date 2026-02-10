class Solution {
public:
    bool detectCapitalUse(string s) {
        int uppercount=0;
        for(int i=0;i<s.size();i++)
        {
            if(isupper(s[i]))
            uppercount++;
        }
        if(uppercount==s.size())
        return true;
        else if(uppercount==0)
        return true;
        else if(uppercount==1&&isupper(s[0]))
        return true;
        else 
        return false;
    }
};