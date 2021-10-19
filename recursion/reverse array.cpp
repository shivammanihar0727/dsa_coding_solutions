#include<bits/stdc++.h>
using namespace std;
int ar[100001];

void reverse(int i,int j)
{
 	if(i<j)
 	{
 		swap(ar[i],ar[j]);
 		reverse(i+1,j-1);
	 }	
}
int main()
{
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	m=0;
	reverse(m,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<" "<<ar[i];
	}
}
