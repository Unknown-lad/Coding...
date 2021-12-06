#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}

struct Node * mergeResult(struct Node *node1,struct Node *node2);

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }

        struct Node* result = mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}

/*

The structure of linked list is the following

struct Node
{
int data;
Node* next;
};

*/

Node* reverseList(Node* head){
    // if(head->next==NULL)
    //     return head;

    // Node* all = reverseList(head->next);
    // head->next->next=head;
    // head->next=NULL;

    // return all;

    struct Node* cur,*next,*prev;

    prev=0;
    cur=next=head;

    while(next!=NULL){
        next=next->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    head=prev;

    return head;
}

struct Node * mergeResult(Node *node1,Node *node2)
{
    // your code goes here
    
    node1 = reverseList(node1);
    node2 = reverseList(node2);

    Node* head=NULL,*temp;

    while(node1!=NULL and node2!=NULL){
        if(node1->data >= node2->data){
            temp=node1->next;
            node1->next=head;
            head=node1;
            node1=temp;
        }
        else {
 
            temp = node2->next;
            node2->next = head;
            head = node2;
            node2 = temp;
        }
    }

    while (node2 != NULL) {
 
        temp = node2->next;
        node2->next = head;
        head = node2;
        node2 = temp;
    }

    while (node1 != NULL) {
 
        temp = node1->next;
        node1->next = head;
        head = node1;
        node1 = temp;
    }

    head = reverseList(head);
    return head;
}