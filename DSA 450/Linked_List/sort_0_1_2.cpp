#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* next;
};

void insert(node* &head,int val){
	struct node* n = new node();
	n->data=val;

	if(head==NULL){
		head=n;
		return;
	}
	node* temp = head;
	while(temp->next){
		temp=temp->next;
	}
	temp->next=n;
}

void brute_force(node* &head){
	int snapped;
	struct node* ptr,*lptr=NULL;
	if(head==NULL){
		return;
	}

	do{
		snapped = 0;
		ptr=head;

		while(ptr->next!=NULL){
			if(ptr->data > ptr->next->data){
				swap(ptr->data,ptr->next->data);
				snapped=1;
			}
			ptr=ptr->next;
		}
		lptr=ptr;
	}
	while(snapped);
}

void brute_force2(node* head){
	int arr[3]={0};
	struct node* temp = head;

	while(temp!=NULL){
		arr[temp->data]++;
		temp=temp->next;
	}
	temp=head;
	for(int i=0;i<3;i++){
		while(arr[i]--){
			temp->data=i;
			temp=temp->next;
		}
	}
}

void optical_solution(node* head){
	struct node* zeroL = new node();
	struct node* oneL = new node();
	struct node* twoL = new node();

	node* temp = head;
	node* zero = zeroL,*one = oneL, *two = twoL;

	while(temp){
		if(temp->data==0){
			zero->next=temp;
			zero=zero->next;
			temp=temp->next;
		}
		else if(temp->data==1){
			one->next=temp;
			one=one->next;
			temp=temp->next;
		}else{
			two->next=temp;
			two=two->next;
			temp=temp->next;
		}
	}
	zeroL->next = oneL->next ? 
	oneL->next : twoL->next;
	oneL->next=twoL->next;
	twoL->next=NULL;

	delete zeroL;
	delete oneL;
	delete twoL;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

	node* head = NULL;
	insert(head,2);
	insert(head,2);
	insert(head,0);
	insert(head,1);
	// brute_force(head);
	// brute_force2(head);
	optical_solution(head);
	display(head);
	
}
