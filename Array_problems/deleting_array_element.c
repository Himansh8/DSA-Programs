#include<stdio.h>
void main(){
    int n,i,a[10],key,k;
    printf("Enter the NO. of array element:");
    scanf("%d",&n);
    printf("Enter the element of array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the index which want to delete:");
    scanf("%d",&key);
    for(i=key;i<(n-1);i++){
        k=a[i];
        a[i]=a[i+1];
        a[i+1]=k;
    }
    n=n-1;
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}