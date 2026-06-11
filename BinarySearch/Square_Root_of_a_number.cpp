// https://www.naukri.com/code360/problems/square-root-of-a-number_893351

int floorSqrt(int n)
{
    int s=1;
    int e=n;
    int ans =0;
    
    while(s<=e){
        long long mid=s+(e-s)/2;
        if((mid*mid)==n){
            return mid;
        }
        else if((mid*mid)>n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
    }
    return ans;
}