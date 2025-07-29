#include <stdio.h>

int main()
{
	int a,b;
	
	printf("enter two numbers\n");
	scanf("%d%d", &a,&b);
	
	if(a>b)
	{
		printf("%d is biger than %d\n", a, b);
	}
	else if (a<b)
	{
		printf("%d is biger than %d\n", b, a);
	}
	else {
		
		printf("both are same\n");
	}
	return 0;
				
	
}
