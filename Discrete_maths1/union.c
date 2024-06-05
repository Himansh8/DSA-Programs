#include<stdio.h>
void main()
{
    int m,n,i,j,k=0,a[10],b[10],c[20],flag=0;
    printf("Enter the no of element of set A");
    scanf("%d",&n);
    printf("Enter the element of set A");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter the no of element of set B");
     scanf("%d",&m);
     printf("Enter the element of set B");
     for (j=0;j<m;j++)
     {
        scanf("%d",&b[j]);
     }
//for set a
    for(i=0;i<n;i++){
         for(j=0;j<k;j++)
         {
            if(a[i]==c[j])
            break;
         }
           if(j==k){
           c[k]=a[i];
           k++;
         }
         }
    //for set b                                                        
    for(i=0;i<m;i++){
         for(j=0;j<k;j++)
         {
            if(b[i]==c[j])
            break;
         }
           if((j==k)){
           c[k]=b[i];
           k++;
         }
         
    }  
    printf("union is:");
    for(i=0;i<k;i++)
        printf("%d\t",c[i]);
      
}