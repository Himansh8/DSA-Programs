#include<stdio.h>
void main()
{ 
    int i,a[5],f=0,n,k=1;
for(i=0;i<5;i++)
{
   scanf("%d",&a[i]);
}
printf("enter the no. you want to search");
scanf("%d",&n);
for (i=0;i<5;i++)
{
    if(n==a[i])
    {
        f=1;break;
    }
    
}
   if (f==1)
   {
    printf("the no is find ");
   }else
     printf("not found");
printf("%d at a[%d]",n,i);

}