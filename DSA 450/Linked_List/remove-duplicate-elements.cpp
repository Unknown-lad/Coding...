#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

void insert(node* &head,int val){
    node* n = new node();
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
}

void frequecy_of_list(node* head){
    node* temp = head;
    while(temp->next!=NULL){
        if(temp->data==temp->next->data){
            temp->next=temp->next->next;
            node* del = temp->next;
            delete del;
        }
        temp=temp->next;
    }
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

    insert(head,1);
    insert(head,2);
    insert(head,2);
    insert(head,3);
    display(head);
    frequecy_of_list(head);
    display(head);
    
return 0;
}