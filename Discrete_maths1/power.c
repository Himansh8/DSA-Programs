#include<stdio.h>
#include<math.h>
int main(){
    int i,n,a[10],size,j;
    printf("Enter the set size");
    scanf("%d",&n);
    printf("Enter the element in set");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    size=pow(2,n);
    for(i=0;i<size;i++){
        for(j=0;j<n;j++){
            if(i & (1<<j)){
                printf("%d",a[j]);
            }
        }
        printf("\t");
    }
    return 0;
}