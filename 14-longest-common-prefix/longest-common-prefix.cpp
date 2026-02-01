class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = strs[0];  // start with the first string

        for (int i = 1; i < strs.size(); i++) 
        {
            int j = 0;
            // Compare prefix with current string character by character
            while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) 
            {
                j++;
            }

            // Manually trim prefix to the matched portion
            string newPrefix = "";
            for (int k = 0; k < j; k++) 
            {
                newPrefix += prefix[k];
            }
            prefix = newPrefix;

            if (prefix.empty()) return "";
        }
        return prefix;
    }
};