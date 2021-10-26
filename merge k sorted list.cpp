#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
void printList(Node* node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
	cout<<endl;
}


class Solution{
  public:
    Node * mergeKLists(Node *v[], int k)
    {
            set<pair<int,Node*>>s;
            
            for(int i = 0;i<k;i++){
                if(v[i]){
                    s.insert({v[i]->data, v[i]});
                }
            }
            
            Node* head = NULL;
            Node* curr = NULL;
            while(!s.empty()){
                auto it = *(s.begin());
                Node* temp = it.second;
                s.erase(s.begin());
                if(head == NULL){
                    head = temp;
                    curr = head;
                    
                    if(temp->next){
                        s.insert({temp->next->data, temp->next});
                    }
                }else{
                    curr->next = temp;
                    if(temp->next){
                        s.insert({temp->next->data, temp->next});
                    }
                    curr = curr->next;
                }
            }
            
            return head;
    }
};
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
	   int N;
	   cin>>N;
       struct Node *arr[N];
       for(int j=0;j<N;j++)
        {
           int n;
           cin>>n;

           int x;
           cin>>x;
           arr[j]=new Node(x);
           Node *curr = arr[j];
           n--;

           for(int i=0;i<n;i++)
           {
               cin>>x;
               Node *temp = new Node(x);
               curr->next =temp;
               curr=temp;
           }
   		}
   		Solution obj;
   		Node *res = obj.mergeKLists(arr,N);
		printList(res);

   }

	return 0;
}