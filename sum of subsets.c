#include<stdio.h>
int main(){
	int target,i,j;
	int a[]={3,4,5,7,8,9};
	printf("enter your target:");
	scanf("%d",&target);
	for(i=0;i<6;i++){
		for(j=i+1;j<6;j++){
			if(a[i]+a[j]==target){
				printf("%d%d\n",a[i],a[j]);
			}
		}
	}
}
