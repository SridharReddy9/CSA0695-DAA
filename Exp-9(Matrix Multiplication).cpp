 #include<stdio.h>
int main()
{
	int n,a[10][10],b[10][10],mul[10][10],x,y,i,j,k;
	printf("Enter the row size:");
	scanf("%d",&x);
	printf("\nEnter the column size:");
	scanf("%d",&y);
	printf("Enter the first matrix elements:\n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			scanf("%d",&a[i][j]);
	    }
	}
	printf("Enter the second matrix elements:\n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			scanf("%d",&b[i][j]);
	    }
	}  
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			mul[i][j]=0;
			for(k=0;k<x;k++)
			{
				mul[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("Matrix Multiplication:\n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}
