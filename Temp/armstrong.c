//strong number by  function

#include<stdio.h>
void main()
{
    int N,r,fact,stn=0,i,n;
    printf("enter the number");
    scanf("%d",&N);
    n=N;
    while(n!=0)
    {
        r=n%10;
        fact=1;
        for(i=r;i<0;i--)
        {
            fact=fact*i;
        }
        stn=stn+fact;
        n=n/10;
    }
    printf("%d\n",stn);
    if(stn==N)
    {
        printf("strong");
    }else
    {
        printf("not strong");
    }

}
