#include<stdio.h>
#include<Math.h>
void main()
{
    int n,rev=0,num,check=0,r,n1;
    printf("enter the nmber");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        n=n/10;
        check++;
    }
    n1=num;
    while(n1!=0)
    {
        r=n1%10;
        rev=rev+pow(r,check);
        n1=n1/10;
    }
    if(rev==num)
    {
    printf("armstrong number");
    }else
    {
        printf("not armsrtong");
    }
}