#include<stdio.h>
void main(){
    int n,a[10],i,key,new;
    // Accesing Array element
    printf("Enter the no of elenemt in array:");
    scanf("%d",&n);
    printf("Enter the element of Array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the index No. which is want to add:");
    scanf("%d",&key);
    // Logic for inserting element in array
    if(n==20){
        printf("Over flow");
    }else{
        for(i=n;i>=key;i--){
            a[i+1]=a[i];
        }
        n=n+1;
        printf("Enter the digit to add:\n");
        scanf("%d",&new);
        a[key]=new; 
        //Printing the output
        for(i=0;i<n;i++){
            printf("%d\t",a[i]);
        }
    }
}