#include<stdio.h>
void main()
{
    int n,i,j,a[20] ,t=0;
    printf("enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n-1;i++)
     { 
        for(j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;

            }
        }
     }
     printf("after sorting");
     for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
     
}