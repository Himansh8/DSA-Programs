#include<stdio.h>
int main(){
    int n,m,i,j,k=0,l=0,a[10],b[10],c[20],d[20],e[10],x=0,flag;

    printf("Enter the size of set A\n");
    scanf("%d",&n);
    printf("Enter the element in the set\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    printf("Enter the size of set B\n");
    scanf("%d",&m);
    printf("Enter the element in the set\n");
    for(j=0;j<m;j++){
        scanf("%d",&b[j]);
    }

    for(i=0;i<n;i++){
        flag=0;
        for(j=0;j<m;j++){
            
            if(a[i]==b[j]){
                flag=1;
                break;
            }else if(flag==0){
                c[k]=a[i];
                
            }
            printf("%d  ",a[i]);
        }
    }

    for(i=0;i<m;i++){
        flag=0;
        for(j=0;j<n;j++){
            if(b[i]==a[j]){
                flag=1;
                break;
            }
            else if(flag==0){
                d[l]=b[i];
                printf("%d  ",b[i]);
            }
        }
    }
    for(i=0;i<k;i++){
        e[x++]=a[i];
    }

    for(i=0;i<l;i++){
        e[x++]=b[i];
    }
    printf("The diff is:\n");
    for(i=0;i<x;i++){
        printf("%d\t",e[i]);
    }
}