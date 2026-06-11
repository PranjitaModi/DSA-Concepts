//https://www.naukri.com/code360/problems/-move-zeroes-to-end_240143
//codeStudio



void pushZerosAtEnd(vector<int> &arr) 
{
	int n = arr.size();
	int zerocount = 0;

	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		zerocount++;
	}
	int index=0;
	for(int i = 0;i<n;i++)
	{
		if(arr[i]!=0){
		arr[index]=arr[i];
		index++;
		}
	}


	for(int i = n-zerocount;i<n;i++)
	{
		arr[i]=0;
	}
	
}