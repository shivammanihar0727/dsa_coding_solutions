
#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
int getNode(node *head,int pos)
{
	node* p,*f;
	p=head;
	f=head;
	int c=1;
	while(c<=pos)
	{
		f=f->next;
		c++;
	}
	while(f->next!=NULL)
	{
		p=p->next;
		f=f->next;
	}
	return p->data;
}


int main()
{
	node *p,*q,*head,*head1;
	
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
			q->next=NULL;
			p->next=q;
			p=p->next;
		}
		int pos;
		cout<<"Enter position =";
		cin>>pos;
		data=getNode(head,pos);	
		cout<<"node data from end of the linklist = "<<data;
		
}

















