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

void bruteForce(node* &head,int val){
	int c=0;
	int c=k;
        node* n,*prev,*cur;
        cur=head;
        prev=NULL;
       	//reverse the element till val 
        while(c-- && cur!=NULL){
            n=cur->next;
            cur->next=prev;
            prev=cur;
            cur=n;
        }
        //recursive reverse then after val elements and link up then
        if(head!=NULL)head->next=reverse(n,k);
        return prev;
        //it will get to that val element then reverse it 
        //again recursively reverse the last elements and link it up
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

	insert(head,4);
	insert(head,5);
	insert(head,6);
	insert(head,7);
	insert(head,8);
	display(head);
	bruteForce(head,3);
	// optimise_solution(head);
	// optimal_solution2(head);
	display(head);

	return 0;
}