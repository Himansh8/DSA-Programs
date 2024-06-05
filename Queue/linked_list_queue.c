#include<stdio.h>
#include<stdlib.h>
 
struct queue{
    int data;
    struct queue *next;
}*start=NULL;

struct queue *new(){
    struct queue *n;
    n=(struct queue*)malloc(sizeof(struct queue));
    return n;
}

void enque(){
    struct queue *node;
    node=new();
    node->next=start;
    printf("Enter the value in queue");
    scanf("%d",&node->data);
    start=node;
}

void deque(){
    struct queue *t1,*t2;
    t1=start;
    t2=start;
    if(start==NULL){
        printf("Queue is empty");
    }else{
    t2=t2->next;
    while(t2->next!=NULL){
        t1=t1->next;
        t2=t2->next;
    }
    t1->next=NULL;
    printf("The deleted element is %d",t2->data);
    free(t2);
    }
}

void display(){
    struct queue *t;
    t=start;
    if(start==NULL){
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
    while(ch!=4){
        printf("\n1.To insert element the queue");
        printf("\n2.To delete the element frm the queue");
        printf("\n3.To display the queue element");
        printf("\n4.To terminate the program");
        printf("\nEnter your choice");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1: enque();
            break;
        case 2: deque();
            break;
        case 3: display();
            break;
        case 4:exit(0);
            break;
        
        default:printf("Enter the valid choice");
            break;
        }
    }
    return 0;
}