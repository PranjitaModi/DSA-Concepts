//https://www.naukri.com/code360/problems/longest-subarray-with-sum-k._5713505


#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    
     int n = nums.size();
    int maxi = 0;

    for(int i = 0; i < n; i++)
    {
        long long sum = 0;

        for(int j = i; j < n; j++)
        {
            sum += nums[j];

            if(sum == k)
            {
                maxi = max(maxi, j - i + 1);
            }
        }
    }

    return maxi;
}



