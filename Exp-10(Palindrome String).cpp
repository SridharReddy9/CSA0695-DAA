#include<stdio.h>
#include<string.h>
int main()
{
	int i,len,flag=0,f,l;
	char st[100];
	printf("Enter any String : ");
	scanf("%s",&st);
	len=strlen(st);
	f=0;
	l=len-1;
	while(f<len/2)
	{
		if(st[f]!=st[l])
			flag=1;
		f++;
		l--;	
	}
	if(flag==0)
		printf("Palindrome");
	else
		printf("Not a Palindrome");
	return 0;
}
