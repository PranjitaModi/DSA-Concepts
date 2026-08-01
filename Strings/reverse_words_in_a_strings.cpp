// https://leetcode.com/problems/reverse-words-in-a-string

class Solution {
public:
    string reverseWords(string s) {

        string ans = "";
        int i = s.length() - 1;

        while(i >= 0) {

            // Skip extra spaces
            while(i >= 0 && s[i] == ' ')
                i--;

            if(i < 0)
                break;

            int j = i;

            // Find the beginning of the word
            while(j >= 0 && s[j] != ' ')
                j--;

            // Add space only if answer is not empty
            if(!ans.empty())
                ans += " ";

            // Extract the word
            ans += s.substr(j + 1, i - j);

            i = j - 1;
        }

        return ans;
    }
};