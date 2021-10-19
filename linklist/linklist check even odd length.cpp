#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};


void checkevenodd(node *start)
{
	node *p;
	p=start;
	while(1)
	{
		if(p==NULL)
		{
			cout<<"Even Linklist";
			break;
		}
		if(p->next==NULL)
		{
			cout<<"Odd Linklist";
			break;
		}
		p=p->next->next;
	}
}



int main()
{
	node *p,*q,*head,*head1;
	int n,i,a;
	cin>>n;
	if(n>0)
	{
		cin>>a;
		p=new node();
		p->data=a;
		p->next=NULL;
		head=p;
	}
			
		for(i=1;i<n;i++)
		{
			cin>>a;
			q=new node;
			q->data=a;	
			q->next=NULL;
			p->next=q;
			p=p->next;
		}
		checkevenodd(head);	
}
