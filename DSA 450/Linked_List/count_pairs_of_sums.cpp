#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};

void insertion(struct node* &head1,int val1){
    struct node* newnode1 = new node();
    newnode1->data=val1;
    if(head1==NULL){
        head1=newnode1;
        return;
    }
    node* temp = head1;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode1;
}

void insertion2(struct node* &head2,int val2){
    struct node* newnode1 = new node();
    newnode1->data=val2;
    if(head2==NULL){
        head2=newnode1;
        return;
    }
    node* temp = head2;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode1;
}

void display(node* head1){
    while(head1!=NULL){
        cout<<head1->data<<" ";
        head1=head1->next;
    }
    cout<<endl;
}

void display2(node* head2){
    while(head2!=NULL){
        cout<<head2->data<<" ";
        head2=head2->next;
    }
    cout<<endl;
}

class Solution{
    public:

    void count_pair(node* head1, node* head2,int x){
        node* temp1=head1;
        node* temp2=head2;
        int count=0;

        while(temp1->next!=NULL && temp2->next!=NULL){

            
        }
        cout<<count<<endl;
    }
};



int main(){
    
    struct node* head1 = NULL;
    struct node* head2 = NULL;

    insertion(head1,1);
    insertion(head1,2);
    insertion(head1,3);
    insertion(head1,4);
    insertion(head1,5);
    insertion(head1,6);
    display(head1);

    insertion2(head2,11);
    insertion2(head2,12);
    insertion2(head2,13);
    display2(head2);

    Solution sc;
    sc.count_pair(head1,head2,12);

return 0;
}