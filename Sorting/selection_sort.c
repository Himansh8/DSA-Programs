#include<stdio.h>
void main(){
    int n,a[10],i,k=0,j,num;
    // Accesing elements of array:
    printf("Enter the No of array element:");
    scanf("%d",&n);
    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // sorting the array:
    for(i=0;i<(n-1);i++){
        num=i;
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                num=j;
            }
        }
            k=a[i];
            a[i]=a[num];
            a[num]=k;
    }
    //Print the sorted  Array:
   for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}