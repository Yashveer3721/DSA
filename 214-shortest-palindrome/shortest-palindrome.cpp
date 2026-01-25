class Solution {
public:
    string shortestPalindrome(string s) {

        //finding the min no.of characters to make palindrome
        string rev=s;
        reverse(rev.begin(),rev.end());
        int size=s.size();
        string combine =s+"$"+rev;
        int n=combine.size();
        vector<int>lps(n,0);
        int pre=0,suf=1;
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
        int m=size-lps[n-1];
        string trans;
        for(int i=size-1;i>=size-m;i--)
        {
            trans.push_back(s[i]);
        }
        return trans+s;
    }
};