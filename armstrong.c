#include<stdio.h>
int main()
{
	int r,n,sum=0,temp;
	printf("enter the number");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(n==sum)
	{
		printf("armstrong");
	}
	else
	{
		printf("not armstrong");
	}
	return 0;
}
