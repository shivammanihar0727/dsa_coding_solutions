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
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		int c=0,c2=0;
		
		vector<int> v;
		for(int i=1;i<n;i++)
		{
			if(ar[i-1]==ar[i]&&ar[i]==1)
			{
				c++;
			}
			else
			{
				v.push_back(c+1);
				c=0;
			}
		}
		sort(v.begin(),v.end(),greater<int>());
		if(v.size()==0)
		{
			cout<<"NO";
		}
		else if(v.size()==1)
		{
			cout<<"YES";
		}
		else
		{
			if(v[0]==v[1])
			{
				cout<<"NO";
			}
			else
			{
				if(v[0]%2==0)
				cout<<"YES";
				else
				cout<<"NO";
			}
		}
		cout<<"\n";
	
		
	}
}
