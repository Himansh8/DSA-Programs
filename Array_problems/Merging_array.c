#include<stdio.h>
int main(){
    int n,a[10],b[10],c[20],i,m,k=0,num=0;
    printf("Enter the size of 1st array :");
    scanf("%d",&n);
    printf("enter the element in array 1st:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   printf("Enter the size of 2nd array:");
    scanf("%d",&m);
    printf("Enter the element of array 2nd");
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    num=n+m;
    for(i=0;i<n;i++){
        c[k]=a[i];
        k++;
    }
    for(i=0;i<m;i++){
        c[k]=b[i];
        k++;
    }
    printf("The merge array is:\n");
    for(i=0;i<num;i++){
        printf("%d\t",c[i]);
    }
    return 0;
}