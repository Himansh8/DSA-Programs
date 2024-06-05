#include<stdio.h>
#include<stdlib.h>

struct stack{
  int data;
  struct stack *next;
}*start=NULL;

struct stack *new(){
    struct stack *n;
    n=(struct stack*)malloc(sizeof(struct stack));
    return n;
}

void push(){
    struct stack *node;
    node=new();
        node->next=start;
        printf("Enter the value in stack");
        scanf("%d",&node->data);
        start=node;
       
}

void pop(){
    struct stack *node,*temp1;
    temp1=start;
    if(start==NULL){
        printf("stack is empty");
    }
    else{
        start=temp1->next;
        printf("The deleted element is %d",temp1->data);
        free(temp1);

    }
}

void display(){
    struct stack *t;
    t=start;
    if(t==NULL){
        printf("The stack is empty");
    }
    else{
        while(t!=NULL){
            printf("%d\t",t->data);
            t=t->next;
        }
    }
}

void peek(){
    struct stack *t;
    t=start;
    if(t==NULL){
        printf("Stack is empty");
    }else{
        printf("The value at top is %d",t->data);
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
        default:printf("Enter the valid choice");
           break;
        }
    }
    return 0;
}