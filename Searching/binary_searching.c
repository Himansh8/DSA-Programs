#include<stdio.h>
void main()
{
    int n,a[20],f,l,m,i,x,ind=-1;
    printf("enter the size of array");
     scanf("%d",&n);
         for(i=1;i<=n;i++)
          {
            scanf("%d",&a[i]);
          }
      f=0;
      l=n-1;
      
      printf("enter the number you want to search");
      scanf("%d",&x);
      while(f<=l)
      { 
        m=(f+l)/2;
        if(a[m]==x)
        {
           ind=m;
            break;
        }else if(a[m]>x)
          {
            l=m-1;
           
          } else 
             {
                f=m+1;
             }
      }
      if(ind==-1){
        printf("element is not foundf in the array");
      }else
       printf("%d is index of %d",ind,x);
}