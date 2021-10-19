#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
      int tt1;
      cin>>tt1;
      while(tt1--)
      {
          ll n;
          cin>>n;
          vector<ll> vecount(n);
          for(ll i=0;i<n;i++)
          {
          	
          	cin>>vecount[i];
		  }
            
          ll odd=0,evecount=0,count=0,xee=0;
          for(ll i=0;i<n;i++)
          {   
              if(vecount[i]==0) {count++;xee++;}
              else
              {     
                  if(count%2==1)
                  odd=max(odd,count);
                  else
                  
                  evecount=max(evecount,count);
                  count=0;
              }

               
          }  
             
                  if(count%2==1)
                  
				  odd=max(odd,count);
                  else
                  
                  evecount=max(evecount,count); 

              
          
          if(xee==0)
          {
              cout<<"No\n";
              continue;
          } 
          if(xee==n)
          {
              if(xee%2)
              cout<<"Yes\n";
              else
              cout<<"No\n";
              continue;
          }  
          if(evecount<=odd/2) 
		  cout<<"Yes\n";
          else
          cout<<"No\n";

      }

}



