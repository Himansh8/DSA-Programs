#include<stdio.h>
int stk[10],a[10],val;
int top=-1;
int pop();
void push(int val);
int main(){
    int i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the element of array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        push(a[i]);
    }
    for(i=0;i<n;i++){
        val=pop();
        a[i]=val;
    }
    printf("The reverse is:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    return 0;
}

void push(int val){
    stk[++top]=val;
}

int pop(){
    return (stk[top--]);
}