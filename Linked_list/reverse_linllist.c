#include<stdio.h>
#include<stdlib.h>

struct rev{
    int data;
    struct rev *next;
}*start=NULL;

struct rev *creat(){
    struct rev *new;
    new=(struct rev*)malloc(sizeof(struct rev));
    return new;
}

void input(){
    struct rev *n;
    n=creat();
    n->next=start;
    start=n;
    printf("enter the node data ");
    scanf("%d",&n->data);
}

void reverse(){
        struct rev *node,*current,*prev;
        prev=NULL;
        node=start;
        current=start;
        while(node!=NULL){
            node=node->next;
            current->next=prev;
            prev=current;
            current=node;
        }
    start=prev;
}

void display(){
    struct rev *t;
    t=start;
    if(t==NULL){
        printf("list is empty");
    }else{
        while(t!=NULL){
        printf("%d\t",t->data);
        t=t->next;
    }
    }
}

int main(){
    int ch;
    while(ch){
        printf("\n1.To insert element in list");
        printf("\n2.To reverse the list");
        printf("\n3.To display the result");
        printf("\n4.To exit from program");
        printf("\nEnter the choice");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:input();
            break;
        case 2:reverse();
            break;
        case 3:display();
            break;
        case 4:exit(0);
            break;
        default:printf("Enter valid  chioce");
        }
    }
}