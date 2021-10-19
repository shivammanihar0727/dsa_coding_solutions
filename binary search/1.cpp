#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ar[n];
		map<int,int> m1,m2;
		map<int,int>::iterator it1,it2;
		
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
			m1[ar[i]]++;
		}
		
		int mx=-1,a=0,num=INT_MAX;
		for(auto it:m1)
		{
			mp1[it.second]++;
		}
		for(auto it:m2)
		{
			if(it.second>mx)
			{
				mx=it.second;
				num=it.first;
			}
			else if(x.second==mx)
			{
			num=min(num,x.first);
			}
		}
		
		cout<<num<<endl;
	}
}
