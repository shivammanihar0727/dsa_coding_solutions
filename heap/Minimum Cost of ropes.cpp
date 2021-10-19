#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    
	    ll n;
	    cin>>n;
	    ll i,sum1,sum2,ar[n],ans;
	    for(i=0;i<n;i++)
	    {
	        cin>>ar[i];
	    }
	    
	    priority_queue<int,vector<int>,greater<int> > pq(ar,ar+n);
	    if(pq.size()==1)
	    {
	        cout<<pq.top();
	    }
	    else
	    {
	        ans=0;
    	    while(pq.size()>1)
            {
                sum1=pq.top();
                pq.pop();
                sum2=pq.top();
                pq.pop(); 
                ans+=sum1+sum2;
                pq.push(sum1+sum2);
            }
            
	            cout<<ans;
	    }
	    cout<<endl;
	}
	return 0;
}
