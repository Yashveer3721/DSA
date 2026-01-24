class Solution {
public:
    void lpsfind(vector<int>&lps,string str)
{
    int pre=0,suf=1;
    while(suf<str.size())
    {
        if(str[pre]==str[suf])
        {
            lps[suf]=pre+1;
            pre++,suf++;
        }
        else
        {
            if(pre==0)
            {
                lps[suf]=0;
                suf++;
            }
            else
            {
                pre=lps[pre-1];
            }
        }
    }
}
    int KMP_MATCH(string haystack, string needle) {
        vector<int>lps(needle.size(),0);
        lpsfind(lps,needle);
        int first=0,second=0;
        while(first<haystack.size() && second<needle.size())
        {
            if(haystack[first]==needle[second])
            {
                first++,second++;
            }
            else
            {
                if(second==0)
                first++;
                else
                second=lps[second-1];
            }
        }
        if(second==needle.size())
        return 1;
        else
        return 0;
    }
    int repeatedStringMatch(string a, string b) {
        string temp=a;
        int repeat=1;
        if(a==b)
        return repeat;
        while(temp.size()<b.size())
        {
            temp+=a;
            repeat++;
        }
        if(KMP_MATCH(temp,b)==1)
        return repeat;
        if(KMP_MATCH(temp+a,b)==1)
        return repeat+1;

        return -1;
    }
};