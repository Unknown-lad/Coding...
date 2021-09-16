#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* next;
};

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

int couting(node* head){
	int count = 0;
	node* temp = head;

	while(temp!=NULL){
		temp=temp->next;
		count++;
	}
	return count;
}

void selectionSorting(node* &head){
	node* temp = head;
 
    // Traverse the List
    while (temp) {
        node* min = temp;
        node* r = temp->next;
 
        // Traverse the unsorted sublist
        while (r) {
            if (min->data > r->data)
                min = r;
 
            r = r->next;
        }
 
        // Swap Data
        swap(temp->data,min->data);
        temp = temp->next;
    }
}

void duplicate_element(node* head){
	node* i,*p,*n,*temp;
    temp=i=head;
    p=i->next;
    n=p->next;

    while(temp->next!=NULL){
    	if(i->data!=p->data){
        	i=p;
    	}
    	if(p->data==n->data){
    		p=p->next;
    		n=n->next;
    	}
    	temp=temp->next;
    }
    i->next=n;
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

	insertion(head,2);
	insertion(head,6);
	insertion(head,4);
	insertion(head,2);
	selectionSorting(head);
	dispay(head);
	duplicate_element(head);
	dispay(head);
	return 0;
}