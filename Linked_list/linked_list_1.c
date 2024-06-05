#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
    int data;
    struct node *next;
}*START=NULL;
// creating a new node:
struct node *creat(){ 
    struct node *new;
    new=(struct node*) malloc(sizeof(struct node));
    return new;
}
// adding the value from starting:
void input(){
    struct node *n;
    n=creat();
    n->next=START;
    START=n;
    printf("enter the node data ");
    scanf("%d",&n->data);
}
// adding value from last:
void input_last(){
    struct node *n1,*temp;
    n1=creat();
    temp=START;
    if(START==NULL)
        input();
    else{
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next=n1;
    n1->next=NULL;
    printf("Enter the node data");
    scanf("%d",&n1->data);
    }

}
// adding value from random position:
void input_mid(){
    struct node *n2,*temp1;
    n2=creat();
    int key,i,c=0;
    temp1=START;
    if(START==NULL){
        input();
    }else {
        printf("Eneter the value where node is added");
        scanf("%d",&key);
        for(i=1;i<key;i++){
            temp1=temp1->next;
        }
        while(temp1->next!=NULL){
            c++;
        }
         if(temp1->next==NULL && key!=c){
            printf("Node is not present");
            return;
        }else
        if(temp1->next==NULL ){
            temp1->next=n2;
            n2->next=NULL;
            printf("Enter the node value");
            scanf("%d",&n2->data);
            return;
        }
        n2->next=temp1->next;
        temp1->next=n2;
        printf("Enter the node value");
        scanf("%d",&n2->data);
    }
    
}
// deleting a node from starting: 
void delete_start(){ 
    struct node *temp;
    if (START==NULL){
        printf("node is empty");
    }else 
    {
          temp=START;
          START=START->next;
          free(temp);
    }
}
// deletind node from last:
void delete_end(){
      struct node *t1,*t2;
      if(START==NULL){
        printf("list is empty");
      }else{
      t1=START;
      t2=START;
      t2=t2->next;
      while(t2->next!=NULL){
        t2=t2->next;
        t1=t1->next;
      }
      t1->next=NULL;
      free(t2);
      }
}
// deleting node from random postion:
void delete_position(){
    struct node *temp,*t1,*t2;
    int i,key;
    if(START==NULL){
        printf("node is empty");
        return;
    }
    else
    {
        printf("Enter the value to be delete ");
        scanf("%d",&key);
        t1=START;
        t2=START;
        t2=t2->next;
        if(t1->data==key)
        {
            temp=t1;
            START=START->next;
            free(temp);
        }
        else
        {
            while(t2->data!=key || t2->next!=NULL){
                t2=t2->next;
                t1=t1->next; 
            }
            if(t2!=NULL){
                temp=t2;
                t1->next=t2->next;
                free(temp);
            }
            else{
            printf("Element is not found");
            return;
            }
        }
    }
}
//reverse a linklist
void reverse(){
    struct node *prev,*nnode,*current;
    prev=NULL;
    nnode=START;
    current=START;
    while(nnode!=NULL){
        nnode=nnode->next;
        current->next=prev;
        prev=current;
        current=nnode;
    }
    prev=START;
}
//search element in a list:
void search(){
    struct node *t;
    t=START;
    int key,i;
    if(START==NULL){
        printf("List is empty\n");
    }else{
    printf("enter the index to search");
    scanf("%d",&key);
    for(i=1;i<key;i++){
        t=t->next;
    }
    printf("search element is:%d",t->data);
    }
}

// Displaying the output:
void display(){
    struct node *t;
    t=START;
    if(t==NULL){
        printf("list is empty");
    }else{
        while(t!=NULL){
        printf("%d\t",t->data);
        t=t->next;
    }
    }
}
//count the element of a list:
void count(){
    struct node *t;
    t=START;
    int count=0;
    while(t!=NULL){
      count++;
      t=t->next;
    }
    printf("%d",count);
}

int main()
{
    int ch;
    while(1)
    {
    printf("\n1.add new node");
    printf("\n2.Exit from program");
    printf("\n3.display output");
    printf("\n4.add new node from last");
    printf("\n5.add new node in mid");
    printf("\n6.delet from start");
    printf("\n7.delete from end");
    printf("\n8.delete from any potion");
    printf("\n9.Reverse the list");
    printf("\n10.count the of linked list");
    printf("\n11.search any element");
    printf("\nEnter your choice:");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1: input();
        break;   
    case 2: exit(0);
        
    case 3: display();
        break;
    case 4:  input_last();
        break;
    case 5:  input_mid();
        break;
    case 6:delete_start();
        break;
    case 7: delete_end();
        break;
    case 8: delete_position();
        break;
    case 9:reverse();
        break;
    case 10: count();
        break;
    case 11: search();
        break;
    default:
        printf("Invalid Choice");
    }
 }
}