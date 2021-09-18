#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


/* Function to get the nth node from the last of a linked list*/
int getNthFromLast(struct Node* head, int n);



/* Driver program to test above function*/
int main()
{
  int T,i,n,l,k;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n>>k;
        int firstdata;
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }

    cout<<getNthFromLast(head, k)<<endl;
    }
    return 0;
}

int getNthFromLast(Node *head, int n)
{
  // Your code here
    Node* temp = head;
    
    int c=0;
    while(temp!=NULL){
      c++;
      temp=temp->next;
    }
    temp=head;
    for(int i=0;i<c-n;i++){
      temp=temp->next;
    }
    if(n>c)
      return -1;
    else
    return temp->data;   
}