#include<stdio.h>
int main()
{
	int l,h,a[10],key,n,mid,flag=0,i;
	printf("Enter array size : ");
	scanf("%d",&n);
	printf("Enter Array Elements\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter key to be searched : ");
	scanf("%d",&key);
	l=1;
	h=n;
	while(l<h+1)
	{
		mid=(l+h)/2;
		if(a[mid]==key)
		{
			flag=1;
			break;
		}
		else if(a[mid]>key)
			h=mid-1;
		else if(a[mid]<key)
			l=mid+1;
	}
	if(flag==1)
		printf("Key element is found in the Location %d",mid);
	else
		printf("Key element is Not found");
		return 0;
}
