#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a[10][10],j,i;
	
	printf("Enter N:");
	scanf("%d",&n);
	printf("Enter %d X %d matrix\n",n,n);

	for(i=0;i<n;i=i+1)
	{
		for(j=0;j<n;j=j+1)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Original matrix\n");
	for(i=0;i<n;i=i+1)
	{
		for(j=0;j<n;j=j+1)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose matrix\n");
	for(i=0;i<n;i=i+1)
	{
		for(j=0;j<n;j=j+1)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
	getch();
}