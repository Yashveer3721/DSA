class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        return false;
        vector<int>ans_s(26,0);
        vector<int>ans_t(26,0);
        for(int i=0;i<s.size();i++)
        {
            ans_s[s[i]-'a']++;
            ans_t[t[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(ans_t[i]!=ans_s[i])
            {
                return false;
                break;
            }
        }
        return true;
    }
};