class Solution {
public:
    string makeSmallestPalindrome(string s) {
          string ans=s; // Initialize ans with the original string.

        int i, j;
        int n = s.length();

        // Loop through the first half of the string.
        for (i = 0, j = n - 1; i < n / 2; i++, j--) {
            if (s[i] == s[j]) {
                // If characters at i and j positions are the same, add them to the answer.
                ans[i] = s[i];
                ans[j] = s[j];
            } else {
                // If characters are different, select the smaller character and add it to both i and j positions.
                char c = min(s[i], s[j]);
                ans[i] = c;
                ans[j] = c;
            }
        }

        return ans;
    }
};