#include <stdio.h>

int main() {
	//code
	int n,a[90],i,j=0;
    printf("Enter the no.of array:");
	scanf("%d",&n);
    printf("enter the element of array:");
    for(i=0;i<n;i++){
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	        a[j]=a[i];
            j++;
	}
    printf("Revese of array is:\n");
	for(j=n-1;j>=0;j--){
	    printf("%d\t",a[j]);
	}
	return 0;
}