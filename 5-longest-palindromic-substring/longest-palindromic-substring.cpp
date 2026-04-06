class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0) return "";

        int start = 0;      // starting index of longest palindrome
        int maxLen = 1;     // length of longest palindrome

        // Check all possible centers
        for (int i = 0; i < n; i++) {
            // Odd length palindrome (center at i)
            int left = i, right = i;
            while (left >= 0 && right < n && s[left] == s[right]) {
                if (right - left + 1 > maxLen) {
                    start = left;
                    maxLen = right - left + 1;
                }
                left--;
                right++;
            }

            // Even length palindrome (center between i and i+1)
            left = i; right = i + 1;
            while (left >= 0 && right < n && s[left] == s[right]) {
                if (right - left + 1 > maxLen) {
                    start = left;
                    maxLen = right - left + 1;
                }
                left--;
                right++;
            }
        }

        return s.substr(start, maxLen);
    }
};
