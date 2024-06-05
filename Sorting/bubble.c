#include<stdio.h>
int main(){
    int n,i,a[20],j;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the element in array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The sorted array is:");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}