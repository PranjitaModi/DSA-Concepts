//https://leetcode.com/problems/rotate-string

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!= goal.length()){
            return false;
        }

        string temp = s + s;

        return temp.find(goal) != string::npos;
    }
};


//another approach

class Solution {
public:
    bool rotateString(string s, string goal) {

        if (s.length() != goal.length())
            return false;

        int n = s.length();

        for (int i = 0; i < n; i++) {

            if (s == goal)
                return true;

            char first = s[0];
            s.erase(s.begin());
            s.push_back(first);
        }

        return false;
    }
};