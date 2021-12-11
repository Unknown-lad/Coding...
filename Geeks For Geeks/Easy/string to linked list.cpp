#include <bits/stdc++.h>
using namespace std;

struct node {
char data;
node* next;
};

node* add(char data)
{
    node* newnode = new node;
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

node* string_to_SLL(string text, node* ansing)
{
    ansing = add(text[0]);
    node* curr = ansing;

    for (int i = 1; i < text.size(); i++) {
        curr->next = add(text[i]);
        curr = curr->next;
    }
    return ansing;
}
    
void dispay(node* head){
    node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){

    string text = "GEEKS";
 
    node* head = NULL;
    head = string_to_SLL(text, head);
    
    dispay(head);

    return 0;
}