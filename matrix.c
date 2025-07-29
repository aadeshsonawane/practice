#include <stdio.h>

int main()
{
	int row, colum;
	printf("Enter the row  size of matrix\n");
	scanf("%d", &row);
	printf("Enter the colum  size of matrix\n");
	scanf("%d", &colum);
	
	int a[row][colum],  b[row][colum], c[row][colum],i, j;	
	printf("Enter the numbers for 1 matrix\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<colum;j++)
		{
			scanf("%d", &a[i][j]);
		}
	
	}
	printf("Enter the numbers for 2 matrix\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<colum;j++)
		{
			scanf("%d", &b[i][j]);
		}
	
	}
	printf("Matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<colum;j++)
		{
			c[i][j]= a[i][j]+b[i][j];
			printf("%d  ", c[i][j]);
		}
		printf("\n");
	}
	return 0;

} 
