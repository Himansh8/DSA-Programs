#include<stdio.h>
#include<string.h>
int stk[10],a[10],top=-1,max=20;
char c;
int pop();
void push(char c);
int main(){
    int n,i,flag=1;
    char exp[max],temp;
    printf("Enter the array size:");
    scanf("%d",&n);
    gets(exp);
    for(i=0;i<n;i++){
        if(exp[i]=='('|| exp[i]=='{'||exp[i]=='['){
            push(exp[i]);
        }
        if(exp[i]==')'||exp[i]=='}'||exp==']'){
            if(top==-1){
                flag=0;
            }
            else{
                temp=pop();
                
            }
            
        }
    }
}