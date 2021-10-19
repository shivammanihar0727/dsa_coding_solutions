#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll p=1000000007;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		
			string s,s1,ss="";
			cin>>s;
			cin>>s1;
			int ar[26];
			
			ll n,i,j,l1,l2;
			for(i=0;i<26;i++)
			{
				ar[i]=i+1;
			}
			l1=s.length();
			ll br[l1];
			br[0]=0;
			l2=s1.length();
			if(l1==0||l1<l2)
			{
				cout<<0;
			}
			else
			{
				ll k=1,l=0;
				for(i=l2-1;i>=0;i--)
				{
					ll res=pow(3,i);
					br[0]=(((ar[s[l]-'a'])%p*(res)%p)%p+br[0]%p)%p;
					
				//cout<<br[0]<<" "<<ar[s[l]-'a']<<" "<<res<<"\n";
					l++;
				}
				cout<<br[0]<<"\n";
				ll ans=0;
				l=0;
				for(i=l2-1;i>=0;i--)
				{
					ll res=pow(3,i);
					ans=(((ar[s1[l]-'a'])%p*(res)%p)%p+ans%p)%p;
					l++;
				}
				
				cout<<ans<<"\n";
				l=0;
				for(i=0;i<l1-l2+1;i++)
				{
					
					ll res=pow(3,l2-1);
					br[k]=((br[k-1]-((ar[s[l]-'a'])%p*(res)%p)%p)*3+ar[s[l+1]-'a']%p)%p;
					
					cout<<br[k]<<" "<<ar[s[l+1]-'a']<<" "<<res<<"\n";
					
					k++;
					l++;
				}
				int f=1;
				ll pos;
				for(i=0;i<k;i++)
				{
					if(ans==br[i])
					{
						pos=i;
						f=0;
						break;
					}
				}
				if(f==1)
				{
					cout<<0;
				}
				else
				{
					cout<<pos-1;
				}
					
			}
		
		
		
	}
	
}
