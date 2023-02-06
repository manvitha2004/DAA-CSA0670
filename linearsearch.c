#include<stdio.h>
int main()
{
	int a[]={10,20,30,40};
	int x,i,flag=0;
	printf("enter the element to be searched");
	scanf("%d",&x);
	for(i=0;i<4;i++)
	{
		if(a[i]==x)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("element is present");
	}
	else
	{
		printf("element is not present");
	}
	return 0;
}
