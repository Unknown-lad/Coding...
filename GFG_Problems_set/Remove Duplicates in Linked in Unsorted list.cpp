#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void print(Node *root)
{
  Node *temp = root;
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}

class Solution
{
    public:
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
      if(head==NULL)
        return head;

      unordered_map<int,int> um;

      Node* prev,*cur,*nxt;

      prev=head;
      cur=head->next;

      um.insert({prev->data,1});
      while(cur!=NULL){
        nxt=cur->next;

        if(um.find(cur->data)==um.end()){
          um.insert({cur->data,1});

          prev=cur;
          cur=nxt;
        }
        else{
          cur->next=NULL;
          prev->next=nxt;
          cur=nxt;
        }
      }
      return head;
    }
};


int main() {
  // your code goes here
  int T;
  cin>>T;
  
  while(T--)
  {
    int K;
    cin>>K;
    struct Node *head = NULL;
    struct Node *temp = head;
 
    for(int i=0;i<K;i++){
    int data;
    cin>>data;
      if(head==NULL)
      head=temp=new Node(data);
      else
      {
        temp->next = new Node(data);
        temp=temp->next;
      }
    }
    
      Solution ob;
    Node *result  = ob.removeDuplicates(head);
    print(result);
    cout<<endl;
    
  }
  return 0;
}
// for random but it will remove duplicates
// if(head==NULL)
//         return head;

//        unordered_set<int> um;

//        Node* temp = head;


//        while(temp!=NULL){
//         um.insert(temp->data);
//         temp=temp->next;
//        }

//        temp=head;
//        Node* temp2;
//        unordered_set<int>::iterator it = um.begin();

//        while (it != um.end()){
//         // cout<<*it<<" ";
//         temp->data=*it;
//         temp2=temp;
//         temp=temp->next;
//         it++;
//        }
//        temp2->next=NULL;
          
//        return head;