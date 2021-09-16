#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
    
    Node(int x) {
        data = x;
        next = NULL;
    }
};

void display(Node* head)
{
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout<<endl;
}

Node* insertInMiddle(Node* head, int x);

int main()
{
    int T, n, x;
    cin>>T;
    while(T--)
    {
        cin>> n >> x;
        
        struct Node *head = new Node(x);
        struct Node *tail = head;
        
        for (int i=0; i<n-1; i++)
        {
            cin>>x;
            tail->next = new Node(x);
            tail = tail->next;
        }
        
        cin>> x;
        head = insertInMiddle(head, x);
        display(head);
    }
    return 0;
}

Node* insertInMiddle(Node* head, int x)
{
// Cpde here
    Node* n = new Node(x);

    Node* temp = head;
    int c=0;
    while(temp!=NULL){
        temp=temp->next;
        c++;
    }

    int mid =0,i=0;

    if(c%2==0){
    mid=(c/2)-1;
    }
    else{
        mid = c/2;
    }

    Node* temp2 = head;
    while(i!=mid){
        temp2=temp2->next;
        i++;
    }

    n->next=temp2->next;
    temp2->next=n;

    return head;
}