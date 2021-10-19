#include<bits/stdc++.h>
using namespace std;

	void calculate(int n,int m)
	{
	
	
	 vector<int> rr(n,0);
    for(int i=0;i<n;i++){
        cin>>rr[i];
    }
	vector<vector<int> > ss(n,vector<int> (m,0));
	for(int i=0;i<n;i++){
	    for(int j=0;j<m;j++){
	        cin>>ss[i][j];
	    }
	}
	
	vector<vector<int> > rrngs(n,vector<int> (m,0));
	vector<vector<int> > rk(n,vector<int> (m,0));
	
	for(int j=0;j<m;j++){
	    vector<int> temp(n,0);
	    for(int i=0;i<n;i++){
	        rrngs[i][j]=rr[i]+ss[i][j];
	        temp[i]=rrngs[i][j];
	        rr[i]=rrngs[i][j];
	    }
	
	    vector<int> temp_ranks(n,0);
	    priority_queue <pair<int,int> > q;
	    for(int i=0;i<n;i++){
	        q.push({temp[i],i});
	    }
	
	    auto prev=q.top();
	    q.pop();
	    int curr_rank=1;
	    int cnt=1;
	    temp_ranks[prev.second]=curr_rank;
	
	    while(!q.empty()){
	        auto curr=q.top();
	        q.pop();
	        if(curr.first==prev.first){
	            temp_ranks[curr.second]=curr_rank;
	            cnt++;
	        }else{
	            temp_ranks[curr.second]=cnt+1;
	            prev=curr;
	            cnt++;
	            curr_rank=cnt;
	        }
	    }
	
	    for(int i=0;i<n;i++){
	        rk[i][j]=temp_ranks[i];
	    }
	}
	
	int result=0;
	for(int i=0;i<n;i++){
	    int pr=max_element(rrngs[i].begin(),rrngs[i].end())- rrngs[i].begin();
	    int pv=min_element(rk[i].begin(),rk[i].end())- rk[i].begin();
	
	    if(pv!=pr){
	        result++;
	    }
	}
	
	cout<<result<<endl;
}
int main()
{
	int tt1;
	cin>>tt1;
	
	while(tt1--)
	{
		int n,m;
		cin>>n>>m;
		calculate(n,m);
	}
}
