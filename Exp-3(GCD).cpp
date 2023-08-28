#include<stdio.h>
int main()
{
	int a,b,gcd,i;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	for(i=1;i<=a && i<=b;++i)
	{
		if(a%i==0 && b%i==0)
			gcd=i;
	}
	printf("GCD of given two numbers is : %d",gcd);
}
