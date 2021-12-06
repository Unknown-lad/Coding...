#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.


    Node* addTwoLists(Node* first, Node* second)
    {
        // code here
       Node* t1;
       t1=first;

       string s=" ",s2=" ";

       while(t1!=NULL){
           s+='0'+t1->data;
           t1=t1->next;
        }

        Node* t2;
        t2=second;

        while(t2!=NULL){
            s2+='0'+t2->data;
            t2=t2->next;
        }

        int val1=stoi(s);
        int val2=stoi(s2);

        int sum=0;
        if(val1>=val2){
            sum=val1+val2;
        }
        else{
            sum=val2+val1;
        }

        cout<<sum; 
        string res = to_string(sum);
        Node* head=NULL;
        
        return head;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}