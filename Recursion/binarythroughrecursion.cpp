//codestudio
//https://www.naukri.com/code360/problems/binary-search_972
int binarysearch(vector<int>&nums,int s,int e,int target)
{
        if(s>e)
        {
        return -1;
        }
        int mid=s+(e-s)/2;
    
    if(nums[mid]==target){
        return mid;
    }

    else if (nums[mid]<target){
        return binarysearch(nums,mid+1,e,target);
    }
        else{
            return binarysearch(nums,s,mid-1,target);
        }
}

int search(vector<int> &nums, int target) {
int n=nums.size();
return binarysearch(nums,0,n-1,target);
}