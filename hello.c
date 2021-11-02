#include <stdio.h>
#include <stdlib.h>
int stack[100],i,j,ch=0,n,t=-1,p,res,pos,top_val=0;

void push (int v);
int pop ();
int top();
void display();
int isfull();
int isempty();
int change(int p,int v);
int count();

int main(){

    printf("*********Stack operations using array*********");
    printf("\nChose one from the above options...\n");
    printf("\n1.Push \t\t2.Pop \n3.Top \t\t4.Display \n5.IsFull \t6.IsEmpty \n7.Change \t8.Count \n9. Exit \n");
    printf("\n===============================================\n");
    printf("Enter the number of elements in the stack ");
    scanf("%d",&n);

    while(ch!=9){

        printf("\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
        {
        int v;
        scanf("%d",&v);
        push(v);
        break;
        }
        case 2:
        {
        top_val= pop();
        printf("\n%d is popped\n",top_val);
        break;
        }
        case 3:
        {
        printf("\n%d is in Top\n",top());
        break;
        }
        case 4:
        {
        printf("\nTotoal Elements in List: ");
        display();
        break;
        }
        case 5:
        {
        if(isfull()==1)
            printf("\nYes\n");
        else
            printf("\nNo\n");
        break;
        }
        case 6:
        {
        if(isempty()==1)
            printf("\nYes\n");
        else
            printf("\nNo\n");
        break;
        }
        case 7:
        {
        int val,pos;
        printf("\n Enter Position and Value: ");
        scanf("%d %d",&pos,&val);

        pos--;
        int p_v = change(pos,val);
        printf("\n%d is changed into %d\n",p_v,val);
        break;
        }
        case 8:
        {
        int res=0;
        res = count();
        printf("\nTotal %d Elements in Stack\n",res);
        break;
        }
        case 9:
        {
        exit(0);
        printf("Exit...");
        break;
        }
        default:
        {
        printf("Please Enter valid choice\n");
        }
        };
    }

    return 0;
}

void push (int v){
    
    if(t==n-1)
        printf("\n Overflow");
    else{
        t=t+1;
        stack[t]=v;
    }
}

int pop (){
    int val=0;
    if(t==-1)
        printf("\n underflow");
    else{
        t=t-1;
        val=stack[t+1];

        return val;
    }
}

int top(){
    int val=0;
    if(t==-1)
        printf("\n underflow");
    else{
        val=stack[t];
        return val;
    }
}

void display(){
    for(int i=t;i>=0;i--){
        printf("%d\n",stack[i]);
    }
    if(t==-1){
        printf("Stack is empty");
    }
}

int isfull(){
    if(t==n-1)
        return 1;
}

int isempty(){
    if(t==-1)
        return 1;
    else
        return 0;
}

int change(int p,int v){
    int prev_val=0;

    if(t==-1){
        printf("\n Underflow");
    }
    else if(p<-1 || p>t){
        printf("\n Wrong Position");
    }
    else{
        for(int i=t;i>=0;i--){
            if(i==p){
                prev_val=stack[i];
                stack[i]=v;
                break;
            }   
        }
    }   
    return prev_val;
}

int count(){
   if(t==n-1)
        printf("\n Overflow");
    else if(t==-1)
        printf("\nUnderflow\n");
    else
        return t+1;
}