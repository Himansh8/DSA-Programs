#include <stdio.h>
#include<math.h>

int main(void) {
	// your code goes here
	int x;
	scanf("%d",&x);
	while(x--){
	    int n,e,a,i;
	    scanf("%d %d",&n,&e);
	    a=pow(2,e);
	    for(i=1;i<=n;i++){
	        a=a-a/2;
	    }
	    printf("%d\n",a);
	    
	}
	return 0;
}

