#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};


//node *reverse(node *head)
//{ 
//    node* prev = NULL; 
//     node* current = head; 
//     node* next; 
//    while (current != NULL) { 
//        next = current->next; 
//        current->next = prev; 
//        prev = current; 
//        current = next; 
//    } 
//    head = prev;
//	return head; 
//} 


bool isPalindrome(node *head)
{
    int flag=0;
    node *head1=head;
    node *curr = head1;
    node *prev = NULL;
    node *nex = NULL;
    while(curr!=NULL)
    {
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }
    
   // head1=prev;
   while(head!=NULL&&prev!=NULL)
   {
       if(head->data==prev->data)
       {
       	head=head->next;
       	prev=prev->next;
       }
       else
       {
       	
       	return false;
    
       }
   }
    return true;
   
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
	
		bool l=isPalindrome(head);
		if(l)
		{
			cout<<"palindrome";
		}	
			else
			{
				cout<<"Not palindrome";
			}
}
