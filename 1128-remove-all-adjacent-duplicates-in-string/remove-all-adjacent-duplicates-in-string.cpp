class Solution {
public:
    string removeDuplicates(string s) {
        int i=0,j=1;
        while(j<s.size())
        {
            if(s[i]==s[j])
            {
                s.erase(i,2);
                if(i>0)
                {
                    i--;
                    j=i+1;
                }
                else
                {
                    i=0,j=1;
                }
            }
            else
            {
                i++,j++;
            }
        }
        return s;
    }
};