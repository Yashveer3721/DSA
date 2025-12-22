class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>lowercase(26),uppercase(26);
        int count=0;
        bool ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a')
            {
                lowercase[s[i]-'a']++;
            }
             else
            {
            uppercase[s[i]-'A']++;
            }
        }     
    for(int i=0;i<26;i++)
    {
        if(lowercase[i]%2==0)
        count+=lowercase[i];
        else
        {
            count+=lowercase[i]-1;
            ans=1;
        }
        if(uppercase[i]%2==0)
        count+=uppercase[i];
        else
        {
            count+=uppercase[i]-1;
            ans=1;
        }
    }
    return (count+ans);
  } 
};