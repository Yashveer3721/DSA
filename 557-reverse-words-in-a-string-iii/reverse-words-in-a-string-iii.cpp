class Solution {
public:
    string reverseWords(string s) {
        int start=0,end=0;
        int begin=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                end=i-1;
                begin=i+1;
                while(start<end)
                {
                    swap(s[start],s[end]);
                    start++,end--;
                }
                start=begin;
            }
        }
        end=s.size()-1;
        while(start<end)
        {
            swap(s[start],s[end]);
            start++,end--;
        }
        return s;
    }
};