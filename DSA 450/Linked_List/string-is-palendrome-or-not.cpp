#include <bits/stdc++.h>
using namespace std;

struct node{
    char data;
    node* next;
};
struct node* top=NULL;

void push(char val){
    node* n = new node();
    n->data=val;
    n->next=top;
    top=n;
}

int pop(){
    struct node* temp = top;
    while(top!=NULL){
        top=top->next;
        return temp->data;
        delete temp;
    }
}

int peek(){
    return top->data;
}

void display(){
    node* temp = top;
    if(temp==0){
        cout<<"empty";
    }
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

bool isPalindrome(){
    node* slow = top;
    while(top!=NULL){
        char i = peek();
        pop();
        
        if(top->data!=i);
        return false;
        top=top->next;
    }
    return true;
}

int main(){
    
    node* head = NULL;
    push('a');
    push('b');
    push('c');
    push('d');
    push('d');
    push('c');
    push('b');
    push('a');
    display();
    
    // display();
    bool check = isPalindrome();
    cout<<check<<endl;
    //display(head);   a bc d dcb a

return 0;
}