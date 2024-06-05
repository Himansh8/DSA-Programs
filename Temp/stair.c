#include<stdio.h>

void staircase(int n) {
    int k=n-1;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(count<k){
                printf(" ");
                count++;
            }else{
                printf("*");
            }
        }
        k--;
        printf("\n");
    }
}

int main(){
    staircase(9);
    return 0;
}