#include<stdio.h>
#include<stdlib.h>

struct mid{
    int data;
    struct mid *next;
}*start=NULL;

struct mid *create(){
    struct mid *new;
    new= (struct mid*)malloc(sizeof(struct mid));
    return new;
}

void add_node(){
    struct mid *n;
    n=create();
     n->next=start;
     start=n;
     printf("Enter the node value");
     scanf("%d",&n->data);
}

void add_node_last(){
    struct mid *n1,*temp;
    n1=create();
    temp=start;
    if(start==NULL){
         add_node();
    }
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next=n1;
    n1->next=NULL;
    printf("Enter the node data");
    scanf("%d",&n1->data);
    
}



void display(){
    struct mid *t;
    t=start;
    while(t!=NULL){
        printf("%d\t",t->data);
        t=t->next;
    }
}

int main(){
    int ch;

    while(1){
        printf("\n1.To add node in list");
        printf("\n2.To display the output");
        printf("\n3.To exit from program");
        printf("\nEnter your choice");
        scanf("%d",&ch);

        switch(ch){
            case 1: add_node_last();
                break;
            case 2: display();
                break;
            case 3: exit(0); 
            // case 4:add_node_last();
            //     break;
            default:
            printf("Enter the valid choice");
        }
    }
}