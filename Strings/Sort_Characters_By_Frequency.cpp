//https://leetcode.com/problems/sort-characters-by-frequency

class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char, int> freq;

        // Count frequency of each character
        for (char c : s) {
            freq[c]++;
        }

        // Bucket where index = frequency
        vector<string> bucket(s.size() + 1);

        for (auto it : freq) {
            bucket[it.second] += it.first;
        }

        string ans;

        // Traverse from highest frequency to lowest
        for (int i = s.size(); i >= 1; i--) {
            for (char c : bucket[i]) {
                ans.append(i, c);
            }
        }

        return ans;
    }
};