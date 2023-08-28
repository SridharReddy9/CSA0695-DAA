#include<stdio.h>
int main()
{
	int a[100],max,i,n;
	printf("Enter array size: ");
	scanf("%d",&n);
	printf("Enter array Elements : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	printf("Largest Element in the given array : %d",max);
	return 0;
}
