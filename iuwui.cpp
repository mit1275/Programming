                                     /*Knowing is not enough,we must apply!!*/
 #include<bits/stdc++.h>
 using namespace std;                          
 #define ll long long int
 #define MOD 1000000007
 #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
 struct Node
 {
 	int data;
 	Node* next;
 	Node(int x)
 	{
 		data=x;
 		next=NULL;
 	}
 };
 Node*insertend(Node*head,int data)
 {
 	if(head==0)
 	{
 		return new Node(data);
 	}
 	Node* curr=head;
 	while(curr->next!=0)
 	{
 		curr=curr->next;
 	}
 	curr->next=new Node(data);
 	return head;
 }
 void printnfromend(Node*head,int n)
 {
 	if(head==NULL)
 	{
 		return;
 	}
 	Node *fast=head;
 	for(int i=0;i<n;i++)
 	{
 		if(fast==NULL)
 		{
 			return;
 		}
 		fast=fast->next;
 	}
 	Node *slow=head;
 	while(fast!=0)
 	{
 		slow=slow->next;
 		fast=fast->next;
 	}
 	cout<<slow->data;
 }
int middile(Node *head)
 {
 	Node *fast=head,*slow=head;
 	if(head==0)
 	{
 		return 0;
 	}
 	while(fast!=NULL&&fast->next!=NULL)
 	{
 		slow=slow->next;
 		fast=fast->next->next;
 	}
 	return slow->data;
 }
Node*reve(Node*head)
{
	if(head==NULL||head->next==NULL)
	{
		return head;
	}
	Node*rest=reve(head->next);

	head->next->next=head;
	head->next=0;
	return rest;
}          
 int main(){
  boost 
  Node *head=0;
  head=insertend(head,12);
  head=insertend(head,121);
  head=insertend(head,45);
  head=insertend(head,77);
   head=insertend(head,34);
  // cout<<middile(head)<<endl;
  
// head=reve(head);
  Node *curr=head;
  while(curr!=0)
  {
  	cout<<curr->data<<" ";
  	curr=curr->next;
  }
   
}