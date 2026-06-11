//https://www.naukri.com/code360/problems/linear-search_2109212
//codeStudio



#include <bits/stdc++.h> 
int linearSearch(vector<int> &a, int x) {
int n = a.size();

    for(int i=0;i<n;i++)
    {
    if(a[i]==x)  
    return i;
    }
    return -1;
}