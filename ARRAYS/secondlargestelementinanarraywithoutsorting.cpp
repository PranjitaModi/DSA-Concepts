//https://www.naukri.com/code360/problems/day-8-:-second-largest-element-in-the-array_873375
//codeStudio



#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
 if(n<2)
     return -1;

     int largest=INT_MIN;
     int secondlargest=INT_MIN;

     for(int i=0;i<n;i++)
     {
         if(arr[i]>largest)
         {
             secondlargest=largest;
             largest=arr[i];
         }
         else if(arr[i]<largest && arr[i]>secondlargest)
         {
             secondlargest=arr[i];
         }
     }
         return(secondlargest == INT_MIN)?-1:secondlargest;
     
    
}