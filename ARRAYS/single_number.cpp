//https://leetcode.com/problems/single-number
//leetcode



class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        for(int i = 0; i<n; i++)
        {
            int value=nums[i];
            int cnt=0;

            for(int j=0; j<n;j++)
            {
                if(nums[j]==value)
                cnt++;
            }

            if(cnt==1)
            return value;
        }
        return -1;
    }
    
};