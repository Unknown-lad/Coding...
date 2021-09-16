#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

void insertion(node* &head,int val){

    struct node* n = new node();
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

void absolute_sort(node* &head){
    node* temp = head;
    int swapped,i;
    struct node* ptr;
    struct node* lptr=NULL;

    if(head==NULL){
        return;
    }
    //brute force methord -> Bubble sort
    do{
        swapped=0;
        ptr=head;
        while(ptr->next!=lptr){
            if(ptr->data > ptr->next->data){
            swap(ptr->data,ptr->next->data);
            swapped=1;
            }ptr=ptr->next;
        }lptr=ptr;
    }while(swapped);
    
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

    struct node* head = NULL;    
    insertion(head,1);
    insertion(head,-2);
    insertion(head,-3);
    insertion(head,4);
    insertion(head,-5);
    display(head);

return 0;
}