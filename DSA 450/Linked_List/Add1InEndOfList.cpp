#include <iostream>
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

class Solution{
	public:
	
	node* reverse(node* head){
	node* cur,*prev,*n;
	cur=head;
	prev=n=NULL;

	while(cur!=NULL){
		n=cur->next;
		cur->next=prev;
		prev=cur;
		cur=n;
	}
	return prev;
}

	node* addOne(node* head){
		head = reverse(head);
	    bool f = true;
	    node *temp;
		temp=head;
		
		while(temp!=NULL and f==true){
		    if(temp->next==NULL and temp->data==9){
		        temp->data=1;
		        node* newnode = new node();
		        newnode->data=0;
		        newnode->next=head;
		        head=newnode;
		        temp=temp->next;
		    }
		    else if(temp->data == 9){
		        temp->data=0;
		        temp=temp->next;
		    }else{
		        temp->data = temp->data+1;
		        temp=temp->next;
		        f=false;
		    }
		}
		head = reverse(head);
        return head;
	}
};

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

	insertion(head,9);
	insertion(head,9);
	insertion(head,9);
	insertion(head,9);
	dispay(head);
	Solution obj;
	head = obj.addOne(head);
	dispay(head);

	return 0;
}