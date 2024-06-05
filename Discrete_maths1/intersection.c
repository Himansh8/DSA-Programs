#include <stdio.h>
int main()
{
    int i,j,k,n,m,a[10],b[10],c[20];
    printf("Enter the size of set A\n");
    scanf("%d",&n);
    printf("Enter the element in set B\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the size of set B\n");
    scanf("%d",&m);
    printf("Enter the element in set B\n");
    for(j=0;j<m;j++){
        scanf("%d",&b[j]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i]==b[j]){
                c[k]=a[i];
                k++;
            }
            
        }
    }
    printf("The intersection is:\n");
    for(i=0;i<k;i++){
        printf("%d  ",c[i]);
    }

    return 0;
}
