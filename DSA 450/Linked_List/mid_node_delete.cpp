#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* next;
};

void insert(struct node* &head,int val){
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

int couting(node* head){
	node* temp = head;
	int count=0;
	while(temp!=NULL){
		temp=temp->next;
		count++;
	}
	return count;
}

void bruteForce(node* head){
	struct node* temp = head;
	int len, i,count;

	count = couting(head);

	// cout<<"count: "<<count<<endl;
	if(count%2==0){
		len = count/2;
	}else{
		len = count/2+1;
	}

	
	for(i=0;i<len-2;i++){
		temp=temp->next;
	}
	node* del = temp->next;
	temp->next=temp->next->next;

	delete del;
}

void optimise_solution(node* head){
	node* temp = head;
	int count=0;

	while(temp!=NULL){
		count++;
		temp=temp->next;
	}

	int mid = (count%2==0) ? (count/2)+1 : (count+1)/2;
	temp=head;
	int k;
	while(mid->next 2){
		temp=temp->next;
	}
	node* del = temp->next;
	temp->next=del->next;

	delete del;
}

void optimal_solution2(node* head){
	node* temp=head;

	node* fptr=head,*sptr=head;
	node* pptr;

	while(fptr!=NULL && fptr->next!=NULL){
		fptr=fptr->next->next;
		pptr=sptr;
		sptr=sptr->next;
	}
	pptr->next=sptr->next;

	delete sptr;
}

void display(node* head){
	struct node* temp = head;

	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main(){

	struct node* head = NULL;

	insert(head,2);
	insert(head,4);
	insert(head,5);
	insert(head,6);
	insert(head,7);
	insert(head,5);
	insert(head,1);
	display(head);
	// bruteForce(head);
	//optimise_solution(head);
	optimal_solution2(head);
	display(head);

	return 0;
}
