//https://leetcode.com/problems/sort-colors?envType=problem-list-v2&envId=array
//leetcode



class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0; 
        int count1 = 0 ; 
        int count2 = 0;

        for(int i: nums)
        {
            if(i==0) count0++;
            else if(i == 1) count1++;
            else count2++;
        }

        int index=0;

        while(count0--) nums[index++]=0;
        while(count1--) nums[index++]=1;
        while(count2--) nums[index++]=2;
    }
};