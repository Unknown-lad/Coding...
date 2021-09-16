#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

void insert_nodes(node* &head,int val){
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

node* reverse_given_pos(node* head,int key){
    node* cur = head;

    while(cur!=NULL){
        cur=cur->next;
        if(cur->data==key)
        break;
    }
    return cur;
}

void display(node* head){
    node* temp =head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

class solution{
    public:
    void deleteNode(node* del){
        del->data=del->next->data;
        del->next=del->next->next;
    }
};

int main(){
    
    node* head = NULL;

    insert_nodes(head,4);
    insert_nodes(head,2);
    insert_nodes(head,6);
    insert_nodes(head,3);
    display(head);
    node* del = reverse_given_pos(head,2);
    solution ob;

    if(del!=NULL && del->next!=NULL){
        ob.deleteNode(del);
    }
    display(head);

return 0;
}