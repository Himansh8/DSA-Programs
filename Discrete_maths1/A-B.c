#include<stdio.h>
int main(){
    int n,i,a[10],m,b[10],j,k=0,c[20], f;
    printf("Enter the array A element:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     printf("Enter the array B element:");
    scanf("%d",&m);
    for(j=0;j<m;j++){
        scanf("%d",&b[j]);
    }
    for(i=0;i<n;i++){
        f=0;
        for(j=0;j<m;j++){
            if(a[i]==b[j]){
                f=1;
                break;
            }
        } 
         if(f==0)
            c[k++]=a[i];
        
    }
   for(k=0;k<n;k++){
        printf("%d\t",c[k]);
    }
    return 0;
}