//https://www.naukri.com/code360/problems/ceil-the-floor_1825401

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
        
		int fl=-1;
		int ce=-1;
		int s=0;
		int e=n-1;
        while(s<=e){
			int mid = s+(e-s)/2;
			if(a[mid]==x){
				return{x,x};
			}
			else if(a[mid]<x){
			fl = a[mid];
			s=mid+1;
			}
			else{
				ce=a[mid];
				e=mid-1;
			}
		}
		return {fl,ce};
}