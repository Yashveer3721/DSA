class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n=words.size();
        int ans=INT_MAX;
        for(int i=0;i<words.size();i++)
        {
            if(words[i]==target)
            {
                int forward = (i - startIndex + n) % n;
                int backward = (startIndex - i + n) % n;
                ans=min(ans,min(forward,backward));
            }
        }
        if(ans==INT_MAX)
        return -1;
        else
        return ans;
    }
};