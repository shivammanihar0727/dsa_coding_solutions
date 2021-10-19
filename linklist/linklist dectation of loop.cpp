
#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
node* start_loop(node*p,node* head)
{
	node *q=head;
	while(p!=q)
	{
		p=p->next;
		q=q->next;
	}
	return p;
}
node* check_loop(node* head)
{
	node *p=head;
	node *q=head;
	while(p&&q&&q->next)
	{
		p=p->next;
		q=q->next->next;
		if(p==q)
		{
			return start_loop(p,head);
		}
	}
	return NULL;
}

int main()
{
	node *p,*q,*head,*head1,*t;
	
	int n,i,a,data;
	cout<<"Enter number of nodes = ";
	
	cin>>n;
	cout<<"Enter  nodes values \n ";
	
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
			q->next=p;
			p->next=q;
			p=p->next;
		}
		t=check_loop(head);	
		if(t==NULL)
		{
			cout<<"NO loop present";
		}
		else
		{
			cout<<"start of loop = "<<p->data;		
	
		}
		
}

