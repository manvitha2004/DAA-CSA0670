#include<stdio.h>
void sort(int arr[],int n)
{
	int i,j,temp,mx;
	for(i=0;i<n-1;i++)
	{
		mx=i;
	
	for( j=i+1;j<n;j++)
	if(arr[j]<arr[mx])
	mx=j;
	temp=arr[mx];
	arr[mx]=arr[i];
	arr[i]=temp;
}
}
int main()
{
int i,n,arr[100];
printf("enter the size");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
	}	
	printf("the elements after sorting");
	sort(arr,n);
	for(i=0;i<n;i++)
	printf("%d\n",arr[i]);
	return 0;
}

