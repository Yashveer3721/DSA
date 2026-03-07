class Solution {
public:
    int maxNumberOfBalloons(string text) {
        // Step 1: Frequency vector for 26 lowercase letters
        vector<int> freq(26, 0);
        
        for(int i=0;i<text.size();i++) 
        {
            freq[text[i] - 'a']++;
        }
        
        // Step 2: Extract counts
        int b = freq['b' - 'a'];
        int a = freq['a' - 'a'];
        int l = freq['l' - 'a'] / 2;  // need 2 'l'
        int o = freq['o' - 'a'] / 2;  // need 2 'o'
        int n = freq['n' - 'a'];
        
        // Step 3: Minimum of all
        return min({b, a, l, o, n});
    }
};