class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int first=0,start=0;
        while(first<name.size()&&start<typed.size())
        {
            if(name[first]==typed[start])
            {
                first++,start++;
            }
            else
            {
                if(first>0 && name[first-1]==typed[start])
                {
                    start++;
                }
                else
                return false;
            }
        }
        while (start < typed.size()) 
        {
            if (typed[start] != name[first - 1]) 
            return false;
            start++;
        }

        return first==name.size();
    }
};