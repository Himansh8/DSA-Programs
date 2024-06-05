#include<stdio.h>
int main(){
    int n,a[20],i=0,j;
    printf("Enter the array number:");
    scanf("%d",&n);
    printf("Enter the array eletment:");
    while(i<n){
        scanf("%d",&a[i]);
        i++;
    }

     i=1;
    while(i<n){
        int temp=a[i];
        j=i-1;
        while(j!=0){
            if(a[j]>temp){
                a[j+1]=a[j];
            }else{
                break;
            }
        }
        a[j+1]=temp;
        i++;
    }
    
    for(i=0;i<n;){
        printf("%d\t",a[i]);
        i++;
    }
} 