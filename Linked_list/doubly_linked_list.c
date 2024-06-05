#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct doubly
{
    struct doubly *prev;
    int data;
    struct doubly *next; 
}*start=NULL;
//creating new node
struct doubly *create(){
    struct doubly *new;
    new= (struct doubly*)malloc(sizeof(struct doubly));
    return new;
}
//Add new node at starting of list
void add_first(){
    struct doubly *n;
    n=create();
    n->next=start;
    if(start==NULL){
        n->prev=NULL;
        start->prev=n;
    }else{
        start->prev=n;
        n->prev=NULL;
    }
    start=n;
    printf("Enter the value in node");
    scanf("%d",&n->data);
}
// Add new node at last of list
void add_last(){
   struct doubly *n,*temp;
   temp=start;
   n=start;
   n=create();
   if(temp==NULL){
     add_first();
   }else{
    while(temp->next!=NULL){
        temp=temp->next;
    }
        n->next=NULL;
        temp->next=n;
        n->prev=temp;
        printf("Enter the node value");
        scanf("%d",&n->data);
   }
}
// Add new node at random postion of list
void add_middle(){
    struct doubly *n,*temp,*k;
    int key,i;
    temp=start;
    n=create();
    if(start==NULL)
    {
        add_first();
    }
    else
    {
        printf("enter the position where node is insert");
        scanf("%d",&key);
        for(i=1;i<key;i++){
            temp=temp->next;
        } 
        if(temp->next==NULL){
            printf("key not present in list");
            return;
        }else{
        printf("Enter the node data");
        scanf("%d",&n->data);
        n->next=temp->next;
        n->prev=temp;
        temp->next->prev=n;
        temp->next=n;
        }
    }
}
//  Delete a node from starting of list
void delete_start(){
    struct doubly *temp;
    temp=start;
    if(temp==NULL){
        printf("Node is empty");
        return;
    }else{
        temp=start;
        temp->next->prev=NULL;
        start=start->next;
        free(temp);
    }
}
//Deleting node from last of list
void delete_last(){
    struct doubly *t1,*t2;
    t1=start;
    t2=start;
    t2=t2->next;
    if(start==NULL){
        printf("Node is empty");
        return;
    }else{
        while(t2->next!=NULL){
            t1=t1->next;
            t2=t2->next;
        }
        t1->next=NULL;
        free(t2);
    }
}
// Delete a node at random position from the list
void delete_middle(){
    struct doubly  *t1,*t2;
    int key;
    t1=start;
    t2=start;
    
    if(t1==NULL){
        printf("List is empty");
        return;
    }else if(t1->next==NULL){
        start=NULL;
        free(t1);
    }else {
        t2=start;
        
        printf("enter the value to delete\n");
        scanf("%d",&key);
        if(t2->data==key){
            start=t2->next;
            free(t2);
            return;
        }
        while(1){
            if(t2->next==NULL&&t2->data!=key){
                printf("Node having data doesnt exist\n");
                return;
            }
            if(t2->data==key){
                if(t2->next==NULL){
                    t2->prev->next=NULL;
                    free(t2);
                    return;
                }
               struct doubly *x,*y;
               x=t2->prev;
                y=t2->next;
                t2->next->prev=x;
                t2->prev->next=y;
                free(t2);
                return;
            }
            t2=t2->next;
            
        }
       }

}
//Display the result:
void display(){
    struct doubly *t;
    t=start;
    
        while(t!=NULL){
            printf("%d ",t->data);
            t=t->next;
        }
    
}

int main(){
    int ch;
    while(1){
    printf("\n1.To add node from start");
    printf("\n2.Exit from program");
    printf("\n3.Disply the output");
    printf("\n4.To add node from last");
    printf("\n5.To add node from middle");
    printf("\n6.deletion of node from starting");
    printf("\n7.to delete from last");
    printf("\n8.to delete from specific position");
    printf("\nEnter your choice");
     scanf("%d",&ch);

     switch(ch){
        case 1: add_first();
            break;
        case 2: exit(0);
        
        case 3: display();
            break;
        case 4: add_last();
            break;
        case 5: add_middle();
            break;
        case 6: delete_start();
            break;
        case 7: delete_last();
            break;
        case 8: delete_middle();
            break;
        default:
          printf("Enter the valid option");
         }
     }
    return 0;
}