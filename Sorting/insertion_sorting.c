#include<stdio.h>
int main(){
    int n,a[20],i,j;
    printf("Enter the Number of array:");
    scanf("%d",&n);
    printf("Enter the array element:");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    // logic of insertion:
    for(i=1;i<n;i++){
        j=i-1;
       int temp=a[i];
        for(;j>=0;j--){
            if(a[j]>temp){
                a[j+1]=a[j];
            }
            else{
                break;
            }
        }
        a[j+1]=temp;
    }
    // printing sorted array:
    for(j=0;j<n;j++){
        printf("%d\t",a[j]);
    }
    return 0;
}