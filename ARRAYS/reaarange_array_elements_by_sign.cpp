//https://leetcode.com/problems/rearrange-array-elements-by-sign?envType=problem-list-v2&envId=array
//leetcode



class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int posiIndex=0;
        int negIndex = 1;

        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
        {
            ans[posiIndex]=nums[i];
            posiIndex +=2;
        }
        else{
            ans[negIndex]=nums[i];
            negIndex +=2;
        }
        }
        return ans;
    }
};