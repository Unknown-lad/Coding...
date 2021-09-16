#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev;

    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insert(node* &head,int val){
    node* n = new node(val);
    n->data=val;

    if(head==NULL){
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void rotate_direction(node* head,int p){
    node* str;
    while(p--){
        str=head;
        while(str->next){
            swap((str->data),(str->next->data));
            str=str->next;
        }
    }
}

int main(){
    
    node* head = NULL;
    insert(head,1);
    insert(head,9);
    insert(head,2);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    display(head);
    rotate_direction(head,3);
    display(head);

return 0;
}