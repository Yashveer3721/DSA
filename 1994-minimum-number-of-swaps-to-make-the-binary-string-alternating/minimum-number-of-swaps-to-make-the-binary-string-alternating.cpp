class Solution {
public:
    int minSwaps(string s) {
        int n0=0,n1=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
                n0++;
            else
                n1++;
        }
        if(abs(n0-n1)>1)
            return -1;
        else if(n0>n1)
        {
            int mismatch=0;
            for(int i=0;i<s.size();i++)
            {
                char expected = (i%2==0 ? '0' : '1');
                if(s[i]!=expected) mismatch++;
            }
            return mismatch/2;
        }
        else if(n1>n0)
        {
            int mismatch=0;
            for(int i=0;i<s.size();i++)
            {
                char expected = (i%2==0 ? '1' : '0');
                if(s[i]!=expected) mismatch++;
            }
            return mismatch/2;
        }
        else
        {
            int mismatch1=0,mismatch2=0;
            for(int i=0;i<s.size();i++)
            {
                char expected1 = (i%2==0 ? '0' : '1');
                if(s[i]!=expected1) mismatch1++;
                
                char expected2 = (i%2==0 ? '1' : '0');
                if(s[i]!=expected2) mismatch2++;
            }
            return min(mismatch1/2,mismatch2/2);
        }
    }
};
