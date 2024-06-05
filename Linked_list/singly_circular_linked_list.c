#include<stdio.h>
#include<stdlib.h>

struct circular{
    int data;
    struct circular *next;
}*start=NULL;

struct circular *create(){
   struct circular *new;
   new=(struct circular*) malloc(sizeof(struct circular));
   return new;
}

void insert_starting(){
    struct circular *n,*temp;
    n=create();
    printf("Enter the node data");
    scanf("%d",&n->data);
    if(start==NULL){
        n->next=n;
        
    }
    else{
    temp=start;
    while(temp->next!=start){
        temp=temp->next;
    }
    temp->next=n;
    n->next=start;
    }
    start=n; 
    
}

void insert_last(){
    struct circular *n,*temp;
    n=create();
    if(start==NULL){
            insert_starting();
            return;
    }
    else{
    temp=start;
    while(temp->next!=start){
        temp=temp->next;
    }
    temp->next=n;
    n->next=start;
    }
    printf("Enter the node data");
    scanf("%d",&n->data);
    
}

void insert_random(){
    struct circular *t,*n; 
    int key,i;
    n=create();
    t=start;

    if(start==NULL){
        insert_starting();
        return;
    }else{
        printf("Enter the postion to aad node");
        scanf("%d",&key);
        for(i=1;i<key;i++){
            t=t->next;
            if(t==start){
                return; 
            }
        }
        if(t->next==start){
          insert_last();
          return;  
        }
        n->next=t->next;
        t->next=n;
        printf("Enter the node value\n");
        scanf("%d\t",&n->data);
    }
}

void delete_first(){
     struct circular *t,*last;
     t=start;
     last=start;
     while(last->next!=start){
        last=last->next;
     }

      if(start==NULL){
        printf("Node is empty");
        return;
     }else 
        if(start->next==start)
        {
           start=NULL;
           last=NULL;
           free(t);
           return;
        }
        start=start->next;
        last->next=start;
        free(t);
}

void delete_last(){
    struct circular *t1,*t2;
    t1=start;
    t2=start;
    if(start==NULL){
        printf("Node is empty");
        return;
    }else
    if(t2==start){
        start=NULL;
        t2->next=NULL;
        free(t2);
        return;
    }else{
    t2=t2->next;
    while(t2->next!=start){
        t2=t2->next;
        t1=t1->next;
    }
    t1->next=start;
    t2->next=NULL;
    free(t2);
    }
}

void display(){
    struct circular *t;
    
      if(start==NULL){
        printf("List is empty");
      }else
       {
        t=start;
            do{
                printf("%d\t",t->data);
                t=t->next;
            }while(t!=start);

       } 
}

int main(){

    int ch;
    while(1){
        printf("\n1.To insert node at starting");
        printf("\n2.Exit from program");
        printf("\n3.To display the result");
        printf("\n4.To insert node at ending");
        printf("\n5.To add node at random postion");
        printf("\n6.To delete node from starting");
        printf("\n7.To delete node from last");
        printf("\nEnter your choice");
        scanf("%d",&ch);

        switch(ch){

            case 1: insert_starting();
                break;
            case 2:exit(0);

            case 3: display();
                break;
            case 4: insert_last();
                break;
            case 5: insert_random();
                break;
            case 6: delete_first();
                break;
            case 7: delete_last();
                break;
        }
    }
    return 0;
}