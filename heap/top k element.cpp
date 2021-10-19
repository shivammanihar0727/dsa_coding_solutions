#include <bits/stdc++.h>  
using namespace std; 
typedef long long ll;
 vector<int> topKFrequent(vector<int>& ar, int k) {
       priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > pq;
        map<int,int> mp;
        map<int,int>::iterator it;
        
		int i,n=ar.size();
        for(i=0;i<n;i++)
        {
            mp[ar[i]]++;
        }
        vector<int> v;
        for(it=mp.begin();it!=mp.end();it++)
        {
            pq.push(make_pair(it->second,it->first));
            if(pq.size()>k)
                pq.pop();
        }
        while(pq.size())
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }

int main() 
{ 
 	int t;
	cin>>t;
	while(t--)
	{
		long n,a,k;
		cin>>n>>k;
		vector<int> v;
		vector<int> v1;
		
		ll ar[n];
		for(int i=0;i<n;i++)
		{
				cin>>ar[i];
				v.push_back(ar[i]);
		}
		v1=topKFrequent(v,k);
		for(int i=0;i<k;i++)
		{
				cout<<v1[i]<<" ";
				
		}
		cout<<endl;		
	}	 
	return 0; 
}

