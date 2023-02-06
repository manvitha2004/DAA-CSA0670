#include<stdio.h>
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("%d%d",a,b);
	
}
int main()
{
	swap(10,20);
}	
