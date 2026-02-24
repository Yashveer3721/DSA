class Solution {
public:
    bool rotateString(string s, string goal) {
        // If lengths don't match, they can't be rotations
        if (s.length() != goal.length()) 
        {
            return false;
        }
        
        // Handle the empty string case (though LeetCode constraints usually prevent this)
        if (s == goal) 
        return true;

        int n = s.length();
        
        // Try every possible rotation (up to n times)
        for (int i = 0; i < n; ++i) 
        {
            // rotate() is a built-in STL function
            // It moves the element at s.begin() to the end
            rotate(s.begin(), s.begin() + 1, s.end());
            
            if (s == goal) 
            {
                return true;
            }
        }
        
        return false;
    }
};