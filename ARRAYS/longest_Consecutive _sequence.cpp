// https://www.naukri.com/code360/problems/longest-consecutive-sequence_759408

#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n)
{
    if (n == 0)
        return 0;

    sort(arr.begin(), arr.end());

    int longest = 1;
    int count = 1;

    for (int i = 1; i < n; i++)
    {
        // Ignore duplicates
        if (arr[i] == arr[i - 1])
            continue;

        // Consecutive element
        if (arr[i] == arr[i - 1] + 1)
        {
            count++;
        }
        else
        {
            count = 1;
        }

        longest = max(longest, count);
    }

    return longest;
}