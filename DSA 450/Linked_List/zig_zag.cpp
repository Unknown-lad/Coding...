#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

void insert(struct node* &head,int val){

    struct node* n = new node();
    n->data=val;
    if(head==NULL){
        head=n;
        return;
    }
    struct node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

// void swaping(node* a, node* b){
//     node* temp = a;
//     a=b;
//     b=temp;
// }

// void zigzag(node* &head){
//     int count=0;
//     struct node* temp = head;
//     struct node* a=NULL,*b=NULL;

//     while(temp->next!=0){
//         if(count%2==0){
//             if(temp->data>temp->next->data){
//             a=head;
//             }
//         }
//         if(count%2!=0){
//             if(temp->data<temp->next->data){
//             b=head;
//             }
//         } 
//         count++;
//         temp=temp->next;
//     }

//     if(a && b){
//         swaping(a,b);
//         swaping(a->next,a->next);
//     }
// }

void zigzag(node* &head){
    node* temp = head;
    
    bool flag=true;

    while(temp->next!=NULL){
        if(flag){
            if(temp->data > temp->next->data){
                swap(temp->data,temp->next->data);
            }
            flag = !flag;
        }
        else{
            if(temp->data < temp->next->data){
                swap(temp->data,temp->next->data);
            }
            flag= !flag;
        }
        temp=temp->next;
    }
}

void display(struct node* head){
    struct node* temp = head;

    while (temp!=0){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

    struct node* head = NULL;
    
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    insert(head,7);
    zigzag(head);
    display(head);
return 0;
}