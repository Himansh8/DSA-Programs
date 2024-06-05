#include<stdio.h>
#include<stdlib.h>

int a[20],val,top=-1;
int max=20;


void push(){
    if(top==max-1){
        printf("Stack is full");
    }
    else{
        printf("Enter the value in stack");
        scanf("%d",&val);
        top++;
        a[top]=val;
    }
}

int pop(){
    if(top==-1){
        printf("Stack is Empty");
    }
    else{
        val=a[top];
        top--;
        printf("\nThe deleted value from top is %d\n",val);
    }
}

int peek(){
    if(top==-1){
        printf("Stack is empty");
    }
    else{
        val=a[top];
        printf("\nThe value at top is %d\n",val);
    }
}

int display(){
    int i;
    if(top==-1){
        printf("Stack is empty");
    }
    else{
        for(i=top;i>=0;i--){
            printf("%d",a[i]);
            printf("\n");
        }
    }
}

int main(){
    int ch;
    while (1)
    {
        printf("\n1.To insert element in stack");
        printf("\n2.To delete element from stack");
        printf("\n3.To know top index element");
        printf("\n4.Display the stack");
        printf("\n5.Exit from program");
        printf("\nEnter your choice");
        scanf("%d",&ch);
    
      switch (ch)
       {
        case 1: push();
           break;
        case 2: pop();
           break;
        case 3:peek();
           break;
        case 4:display();
           break;
        case 5: exit(0);
           break;
        default:
           break;
        }
    }
    return 0;
}