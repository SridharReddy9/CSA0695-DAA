#include<stdio.h>
int main()
{
	int n,i,fact=0;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			fact=1;
		}
	}
	if(fact==0)
	{
		printf("%d is a prime number",n);
	}
	else
	{
		printf("%d is a not prime number",n);
	}
	return 0;
}
