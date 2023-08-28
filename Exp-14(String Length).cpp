#include<stdio.h>
#include<string.h>
int main()
{
	int l;
	char st[100];
	printf("Enter any String : ");
	scanf("%[^\n]s",&st);
	l=strlen(st);
	printf("Length of the given String : %d",l);
	return 0;
}
