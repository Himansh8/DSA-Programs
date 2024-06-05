#include<stdio.h>
int sum(int n)
{
	int m=0;
	while(n>0)
	{
		m=m+ n%10;
		n=n/10;
	}
	return m;
}
int fact(int n)
{
	int m=0, x=2;
	while(n>1)
	{
		if(n%x==0)
		{
			m=m+sum(x);
			n=n/x;
		}
		else
		{
			x++;
		}
	}
	return m;
}
void smith(int n)
{
	if(sum(n) == fact(n))
	{
		printf("\nXYZ\n");
	}
	else
	{
		printf("\nNOT\n");
	}
}
int main()
{
	int n;
	printf("\n Enter any NUmber:");
	scanf("%d",&n);
	fact(n);
	sum(n);
	smith(n);
}