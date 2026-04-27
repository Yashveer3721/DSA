class Solution {
public:
int helper(string &s,int l,int r,int k)
{
    vector<int>freq(26,0);
    for(int i=l;i<=r;i++)
    {
        freq[s[i]-'a']++;
    }
    for(int i=l;i<=r;i++)
    {
        if(freq[s[i]-'a']<k)
        {
            int left=helper(s,l,i-1,k);
            int right=helper(s,i+1,r,k);
            return max(left,right);
        }
    }
    return r-l+1;
}
    int longestSubstring(string s, int k) {
        return helper(s,0,s.size()-1,k);
    }
};