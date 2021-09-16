#include <iostream>
#include <stack>

using namespace std;

struct node{
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

node *head = NULL, *temp;

void insert(int new_data){
    node* n = new node(new_data);

    if(head==NULL){
        head=n;
        return;
    }

    temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

int sumOfLastN_Nodes(int n)
{
    temp=head;
    stack<int> s;

    while(temp!=NULL){
        s.push(temp->data);
        temp=temp->next;
    }

    int count=0,sum=0;
    while (!s.empty()) {
        // cout << ' ' << s.top();
        sum=sum+s.top();
        s.pop();

        count++;
        if(count==n)
            break;
    }

    return sum;
}

int main(){

    int t;
    cin>>t;

    while(t--){

        int n,val,m;
        cin>>n>>m;

        for(int i=0;i<n;i++){
            cin>>val;
            insert(val);
        }
        cout<<sumOfLastN_Nodes(m)<<endl;
    }
    return 0;
}

//input: 
// 2
// 6 3
// 5 9 6 3 4 10
// 2 2
// 1 2