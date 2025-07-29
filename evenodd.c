#include<stdio.h>

int main()
{
	int x;
	printf("Enter the number: ");
	scanf("%d", &x);
	
	if(x%2==0)
	{
		printf("%d even number\n", x);
		
	}
	else {
	
		printf("%d odd number\n", x);
		
	}
	
	// printf("%d\n", x%2);
	printf("because remainder is %d\n", x%2);

	return 0;

}
