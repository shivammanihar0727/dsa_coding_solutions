#include<bits/stdc++.h>
using namespace std;
struct node
{
	int info;
	node* next;
};

  
int size = 0; 
  
//Node* getNode(int data) 
//{ 
//    // allocating space 
//    Node* newNode = new Node(); 
//  
//    // inserting the required data 
//    newNode->data = data; 
//    newNode->next = NULL; 
//    return newNode; 
//} 
int main()
{
	int i,j,n,a;
	node *head,*p,*q;
	cout<<"Enter no. of linklist = ";
	cin>>n;
	cout<<"Enter node value = ";
	if(n>0)
	{
		cin>>a;
		p=new node();
		p->info=a;
		p->next=NULL;
		head=p;
		
	}
	for(i=1;i<n;i++)
	{
		cin>>a;
		q=new node();
		q->info=a;
		q->next=NULL;
		p->next=q;
		p=p->next;
	}

	
	while(1)
	{
			
		cout<<"Enter Your option\n";
		cout<<"1:Insert at the beginning\n";
		cout<<"2:Insert at the particular position\n";
		cout<<"3:Insert at the end\n";
		cout<<"4:Display linklist members\n";
		
		cout<<"5:Exit\n";
		cin>>n;
		switch(n)
		{
			case 1:
				node *temp;
				cout<<"Enter the element to be inserted at the beginnig = ";
					cin>>a;
				if(head==NULL)
				{
								
					temp=new node();
					temp->info=a;
					temp->next=NULL;
					head=temp;
					
				}
				else
				{
					temp=new node();
					temp->info=a;
					temp->next=head;
					head=temp;
					cout<<"Element has been inserted at the beginning\n";
				}
				break;
			case 2:
				
				node *temp2,*ptr;
				ptr=new node();
				temp2=new node();
				temp2=head;
				cout<<"Enter  the element value after which you want to insert the element = ";
					cin>>a;
					while(1)
					{
						if(temp2->info==a)
						{
						 	cout<<a<<"\n";			  
						break;	
						}
						temp2=temp2->next;
					}
					int val;
					cout<<"Enter the node value you want to insert = ";
					cin>>val;
					ptr->info=val;
					ptr->next=temp2->next;
					temp2->next=ptr;
				
					cout<<"Element has been inserted at the desired position\n";
				break;
			case 3:
				
				cout<<"Enter the element to be inserted at the end = ";
					cin>>val;
				node *temp3,*ptr1;
				ptr1=new node();
				temp3=new node();
				temp3=head;
				   while(1)
				   {
				   		   if(temp3->next==NULL)
				   		   break;
				   		   temp3=temp3->next;
				   }
				   
					ptr1->info=val;
					ptr1->next=NULL;
					temp3->next=ptr1;

				
				break;
			case 4:
				
				node *temp1;
				temp1=new node();
				temp1=head;
				   while(temp1!=NULL)
					{
						cout<<temp1->info<<"->";
						temp1=temp1->next;
					}
					cout<<"\n";
					break;
					case 5:
						exit(0);
					default:
					cout<<"Invalid Choice\n";
				
					
			
		}
		
	}
}
