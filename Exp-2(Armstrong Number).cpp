#include<stdio.h>
int main()
{
	int n,r,sum=0,temp;
	printf("Enter any three digit number : ");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		r=temp%10;
		sum=sum+(r*r*r);
		temp=temp/10;
	}
	if(sum==n)
		printf("%d is an Armstrong Number",n);
	else
		printf("%d is not an Armstrong Number",n);
	return 0;
}
