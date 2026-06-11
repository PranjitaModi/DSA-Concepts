//https://www.naukri.com/code360/problems/largest-element-in-the-array-largest-element-in-the-array_5026279
//codeStudio



int largestElement(vector<int> &arr, int n) {
    
int maxi = arr[0];
for(int i=1;i<n;i++)
{
    if(arr[i]>maxi){
        maxi = arr[i];
    }
}
return maxi;

}
