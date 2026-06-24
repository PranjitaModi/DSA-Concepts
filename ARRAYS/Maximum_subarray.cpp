//https://leetcode.com/problems/maximum-subarray

//BruteForce
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int maxi= INT_MIN;
       int k;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                int sum=0;
                for(k=i; k<=j; k++){
                    sum=sum+nums[k];
                    maxi=max(maxi,sum);
                }
            }
        }
        return maxi;
    }
};


//Optimal sol 
//Kadane's Algo //Finding sum only
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int maxi=INT_MIN;
      int sum = 0;
      for(int i=0;i<nums.size();i++){
        sum = sum+nums[i];

        if(sum>maxi){
            maxi=sum;
        }

        if(sum<0){
            sum=0;
        }
      }
      return maxi;
    }
};


//finding and printing
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int sum = 0;

        int start = 0, end = 0;
        int tempStart = 0;

        for(int i = 0; i < nums.size(); i++) {

            sum += nums[i];

            if(sum > maxi) {
                maxi = sum;
                start = tempStart;
                end = i;
            }

            if(sum < 0) {
                sum = 0;
                tempStart = i + 1;
            }
        }

        // Print the subarray
        cout << "Maximum Sum Subarray: ";
        for(int i = start; i <= end; i++) {
            cout << nums[i] << " ";
        }
        cout << endl;

        return maxi;
    }
};