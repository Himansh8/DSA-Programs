#include<stdio.h>
#include<stdlib.h>
#define max 20
int a[20],top1=-1,top2=max,val1,val2,i;

void push1(){
    if(top1==top2-1){
        printf("Stack Overflow");
    }else{
        top1++;
        printf("Enter the value in stack");
        scanf("%d",&val1);
        a[top1]=val1;
    }
}

int pop1(){
    if(top1==-1){
        printf("Stack 1 is Underflow");
    }else{
        val1=a[top1];
        printf("%d",val1);
        top1--;
    }
}

void push2(){
    if(top1==top2-1){
        printf("Stack Overflow");
    }else{
        top2--;
        printf("Enter the value in stack 2");
        scanf("%d",&val2);
        a[top2]=val2;
    }
}

int pop2(){
    if(top2==max){
        printf("stack 2 is in Underflow");
    }else{
        val2=a[top2];
        top2++;
        printf("%d",val2);
    }
}

int peak1(){
    if(top1==-1){
        printf("Stack 1 is empty");
    }else{
        printf("%d",a[top1]);
    }
}

int peak2(){
    if(top2==max){
        printf("Stack 2 is empty");
    }else{
        printf("%d",a[top2]);
    }
}

int display1(){
    if(top1==-1){
        printf("Stack 1st is empty");
    }else{
        for(i=top1;i>=0;i--){
            printf("%d\t",a[i]);
        }
    }
}

int display2(){
    if(top2==max){
        printf("stack 2nd is empty");
    }else{
        for(i=top2;i<max;i++){
            printf("%d\t",a[i]);
        }
    }
}
int main(){
    int ch;
    while(1){
        printf("\n1.To push element in 1st stack");
        printf("\n2.To push element in 2nd stack");
        printf("\n3.To pop element from 1st stack");
        printf("\n4.To pop element from 2nd stack");
        printf("\n5.To display top element of 1st stack");
        printf("\n6.To display top element of 2nd stack");
        printf("\n7.To display the 1st stack ");
        printf("\n8.To display the 2nd stack");
        printf("\n9.To exit from program");
        printf("\nEnter your choice");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:push1();
            break;
        case 2:push2();
            break;
        case 3:pop1();
            break;
        case 4:pop2();
            break;
        case 5:peak1();
            break;
        case 6:peak2();
            break;
        case 7:display1();
            break;
        case 8:display2();
            break;
        case 9:exit(0);
    
        default:printf("Enter the valid choice");
            break;
        }
    }
}