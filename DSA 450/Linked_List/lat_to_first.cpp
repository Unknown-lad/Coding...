#include <iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

void last_to_first(node* head){
	node *temp,*after;
	temp=head;
	after=temp->next;

	while(temp->next->next!=NULL){
		temp=temp->next;
		after=after->next;
	}
	temp->next=NULL;
	after->next=head;
	head=after;
	
}

void insertion(struct node* &head,int val){
	struct node* newnode = new node();
	newnode->data=val;

	if(head==NULL){
		head=newnode;
		return;
	}

	struct node* temp = head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newnode;
}

void dispay(node* head){
	struct node* temp = head;

	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main(){

	struct node* head = NULL;

	insertion(head,1);
	insertion(head,2);
	insertion(head,3);
	insertion(head,5);
	insertion(head,6);
	insertion(head,8);
	dispay(head);
	last_to_first(head);
	dispay(head);

	return 0;
}