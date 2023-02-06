#include<stdio.h>
#include<conio.h>
#include<math.h>
int knapsack(int capacity,int weight[],int value[],int n)
{
	int knap[n+1][capacity+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=capacity;j++)
		{
			if(i==0||j==0)
			{
				knap[i][j]=0;
			}
			else if(weight[i-1]<=j)
			{
				knap[i][j]=fmax(knap[i-1][j],knap[i-1][j-weight[i-1]]+value[i-1]);
			}
			else
			{
				knap[i][j]=knap[i-1][j];
			}
		}
	}
	return knap[n][capacity];
}
int main()
{
	int value[]={1,4,5,7};
	int weight[]={1,3,4,5};
	int capacity=7;
	int n=sizeof(value)/sizeof(value[0]);
	printf("carries:%d",knapsack(capacity,weight,value,n));
}
