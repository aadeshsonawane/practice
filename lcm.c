#include <stdio.h> 

int main()
{
	int x,y,i;
	printf("Enter two numbers: \n");
	scanf("%d%d", &x, &y);
	int c=x*y;
	
	for(i=1;i<=c;i++)
	{
		if(i%x==0 && i%y==0)
		{
			printf("lcm is: %d\n", i);
			break;
		}
	}

	return 0;	
}