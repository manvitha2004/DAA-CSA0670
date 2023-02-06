#include<stdio.h>
void bubble_sort(int a[])
{
	int i,j,t;
	for(i=1;i<5;i++)
	{
		j=i;
		while(a[j]<a[j-1] &&j>0)
		{
			t=a[j];
			a[j]=a[j-1];
			a[j-1]=t;
			j--;
		}
	}
}
int main()
{
	int i,p,m,min,max;
	int a[]={9,4,10,12,5};
	printf("the elements after sorting ");
	bubble_sort(a);
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("enter the p ");
	scanf("%d",&p);
	min=a[p-1];
	printf("%d\n",min);
	printf("enter the m");
	scanf("%d",&m);
	max=a[5-m];
	printf("%d\n",max);
	return 0;
}
