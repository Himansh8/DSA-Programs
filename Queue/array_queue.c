#include<stdio.h>
#include<stdlib.h>

int a[20],front=0,rear=-1,max=20,val;

void enque(){
    if(rear==max-1){
        printf("Queue is full");
    }else{
    printf("Enter the element in the Queue:-");
    scanf("%d",&val);
    rear++;
    a[rear]=val;
    }
}
 
void deque(){
    if(rear==-1){
        printf("Queue is Empty");
    }else{
        val=a[front];
        front++;
        printf("The deleted element is:-%d",val);
    }
}

void display(){
    int i;
    if(rear==-1){
        printf("The Queue is Empty");
    }else{
        for(i=front;i<=rear;i++){
            printf("%d\t",a[i]);
        }
    }
}

int main(){
    int ch;
        while(1)
        {
            printf("\n1.To enter the element in queue");
            printf("\n2.To delete element from the queue");
            printf("\n3.To display the queue");
            printf("\n4.To exit from program");
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
            case 4: exit(0);
                break;
            default:printf("Enter the valid choice");
                break;
            }
        }
    return 0;
}