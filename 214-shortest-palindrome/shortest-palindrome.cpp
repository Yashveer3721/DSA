class Solution {
public:
    string shortestPalindrome(string s) {
        string rev=s;
        reverse(rev.begin(),rev.end());
        long long size=s.size();
        string combine =s+"$"+rev;
        long long n=combine.size();
        vector<long long>lps(n,0);
        long long pre=0,suf=1;
        while(suf<n)
        {
            if(combine[pre]==combine[suf])
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
        long long m=size-lps[n-1];
        string trans;
        for(long long i=size-1;i>=size-m;i--)
        {
            trans.push_back(s[i]);
        }
        return trans+s;
    }
};