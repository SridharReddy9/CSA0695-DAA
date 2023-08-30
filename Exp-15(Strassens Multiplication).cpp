#include<stdio.h>
int main()
{
	int a[10][10],b[100][10],c[10][10],i,j,m1,m2,m3,m4,m5,m6,m7,r=2,s=2;
	printf("Enter First Matrix Elements \n");
	for(i=1;i<=r;i++){
		for(j=1;j<=s;j++){
			printf("a[%d][%d]  :  ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter Second Matrix Elements\n");
	for(i=1;i<=r;i++){
		for(j=1;j<=s;j++){
			printf("b[%d][%d]  :  ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	m1=(a[1][1]+a[2][2])*(b[1][1]+b[2][2]);
	m2=(a[2][1]+a[2][2])*b[1][1];
	m3=a[1][1]*(b[1][2]-b[2][2]);
	m4=a[2][2]*(b[2][1]-b[1][1]);
	m5=(a[1][1]+a[1][2])*b[2][2];
	m6=(a[2][1]-a[1][1])*(b[1][1]+b[1][2]);
	m7=(a[1][2]-a[2][2])*(b[2][1]+b[2][2]);
	c[1][1]=m1+m4-m5+m7;
	c[1][2]=m3+m5;
	c[2][1]=m2+m4;
	c[2][2]=m1+m3-m2+m6;
	printf("Resultant Matrix\n");
	for(i=1;i<=r;i++){
		for(j=1;j<=s;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
