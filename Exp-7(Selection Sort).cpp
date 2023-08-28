#include<stdio.h>
int main()
{
	int n,a[100],small,min,i,j;
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		small=i;
		for(j=i+1;j<n;j++)
		{
			if(a[small]>a[j])
				small=j;
		}
		if(small!=i)
		{
			int temp=a[small];
				a[small]=a[i];
				a[i]=temp;
		}
	}
	printf("Sorted Array: ");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}
