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

void odd_even(node* head){
    node* even = NULL;
    node* e = NULL;
    node* odd = NULL;
    node* o = NULL;
    node* temp = head;

    while (temp!=NULL){
        if(even->data%2==0){
            if(even==head){
                even=head;
                e=head;
            }else{
                e->next=head;
                e=e->next;
            }
        }
        if(odd->data%2!=0){
            if(odd==head){
                head=odd;
                o=head;
            }else{
                o->next=head;
                o=o->next;
            }
        }
        temp=temp->next;

        if(even!=NULL){
            e->next=odd;
        }
        if(odd!=NULL){
            o->next=NULL;
        }
        if(even==NULL)cout<<odd<<endl;;
        cout<<even<<endl;
    }
    
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
    odd_even(head);


return 0;
}