#include<stdio.h>

int main(){

    int n,m,i,j,a[10],b[10];

    printf("Enter the array A size");
    scanf("%d",&n);
    printf("Enter the element in array A\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 

    printf("Enter the array B size");
    scanf("%d",&m);
    printf("Enter the array B element\n");
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    printf("The inter section is:");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i]==b[j]){
                printf("%d\t",a[i]);
            }
        }
    }
    return 0;
}