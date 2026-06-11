//codestudio
//https://www.naukri.com/code360/problems/reverse-the-string_799927

#include <bits/stdc++.h> 

int recursivereverse(string& str,int i,int j){
	if(i>j)
	{
		return -1;
	}
		swap(str[i],str[j]);
		i++;
		j--;
		recursivereverse(str,i,j);
}
string reverseString(string str)
{
	int n=str.size();
	recursivereverse(str,0,n-1);
	return str;
}