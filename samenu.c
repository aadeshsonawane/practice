 #include <stdio.h> 

int main()
{
	int size, i,j;
	printf("enter the size of star\n");
	scanf("%d", &size);
	
	for(i=1;i<=size;i++)
	{
		for(j=1;j<=size;j++)
		{
			if(j<=i)
			{
				printf("%d", j);
			}
			else
			{
				printf(" ");
			
			}	
		
		}
		printf("\n");
	}
	
	return 0;

}
