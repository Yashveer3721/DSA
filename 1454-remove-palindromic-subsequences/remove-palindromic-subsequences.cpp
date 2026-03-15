class Solution {
public:
    int removePalindromeSub(string s) {
        // Check if s is a palindrome
        int i = 0, j = s.size() - 1;
        while (i < j) 
        {
            if (s[i] != s[j]) return 2; // Not a palindrome
            i++;
            j--;
        }
        return 1; // Palindrome
    }
};