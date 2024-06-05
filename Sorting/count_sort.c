#include<stdio.h>
int main(){
    int n,i,a[10],b[10],c[10],k;

    printf("enter the range of element");
    scanf("%d",&k);
    printf("Enter the array A size");
    scanf("%d",&n);
    printf("Enter the array A element");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++){
        c[i]=0;
    }
    for(i=0;i<k;i++){
        c[a[i]]+=1;
    }
    for(i=0;i<k;i++){
        c[i]=c[i]+c[i-1];
    }
    for(i=n-1;i>=0;i--){
        b[c[a[i]]-1]=a[i];
    }
    printf("the sorted array is:\n");
    for(i=0;i<n;i++){
        printf("%d\t",b[i]);
    }
    return 0;
}