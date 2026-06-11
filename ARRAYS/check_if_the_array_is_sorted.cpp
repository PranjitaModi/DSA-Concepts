//sorted_and_rotated_array.cpp
//https://leetcode.com/problems/check-if-array-is-sorted-and-rotated?envType=problem-list-v2&envId=array
//leetcode



class Solution {
public:
    bool check(vector<int>& nums) {
       int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>nums[(i+1)%nums.size()])
            {
                count++;
            }
        }
        return count <=1;
    }
};