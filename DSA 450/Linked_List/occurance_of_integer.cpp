#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

void insertion(node* &head,int val){
    node* n = new node;
    n->data=val;

    if(head==NULL){
        head=n;
        return;
    }
    node* tmp = head;
    while(tmp->next!=0){
        tmp=tmp->next;
    }
    tmp->next=n;
}

void display(node* head){
    node* temp = head;

    while(temp!=0){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void integer_count(node* head,int val){
    int count=0;
    node* temp = head;
    while(temp!=0){
        if(temp->data==val)
        count++;
        temp=temp->next;
    }
    cout<<count<<endl;
}

int main(){

    node* head = NULL;

    insertion(head,1);
    insertion(head,2);
    insertion(head,3);
    insertion(head,1);
    insertion(head,4);
    insertion(head,1);
    display(head);
    integer_count(head,1);


return 0;
}