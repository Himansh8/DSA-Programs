#include<stdio.h>
void main()
{
   int i,j,a[20],n,t=0;
   printf("enter the size of array");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
     for(j=i+1;j<n;j++)
      {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
      }
    }
    printf("after the swaping--");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}