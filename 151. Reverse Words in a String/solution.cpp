class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        int n = s.length();
        int i = n - 1;

        while (i >= 0) {
            // Skip leading spaces
            while (i >= 0 && s[i] == ' ') {
                i--;
            }

            if (i < 0) {
                break;  // No more words to process
            }

            int j = i;
            
            // Find the start of the current word
            while (j >= 0 && s[j] != ' ') {
                j--;
            }
            
            // Extract and append the word to the result
            result += s.substr(j + 1, i - j) + " ";
            i = j;
        }

        // Remove the trailing space and return the result
        if (!result.empty()) {
            result.pop_back();
        }
        
        return result;
    }
};
