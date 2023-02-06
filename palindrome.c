#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],revstr[100],ch,rev;
	int len ,i,j,n,x;
	printf("enter the choice:1.string\n2.number");
	scanf("%c",&ch);
	switch(ch)
	{
	case 1:
		{
	printf("enter the string:");
	scanf("%s",&str);
	len=strlen(str);
	j=0;
	for(i=len-1;i>=0;i--)
	{
		revstr[j++]=str[i];
	}
	printf("%s is the rev of string",revstr);
	if(revstr[j]=str[i])
	{
		printf("%s is a palindrome",str);
	}
	else
	printf("%s is not a palindrome",str);
}
	case 2:
	{
		printf("enter the number");
		scanf("%d",&n);
		while(n>0)
		{
			x=n%10;
			rev=rev%10+x;
			n=n/10;
		}
		if(rev==n)
		printf("%d is a palindrome",n);
		else
		printf("%d is not a palindrome",n);
	}

} 
}
