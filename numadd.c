#include <stdio.h>

int main()
{
	int number, total = 0, a;
	printf("Enter the number: ");
	scanf("%d", &number);
	
	printf("revers is: ");
	while(number % 10 != 0)
	{
		a = number % 10;
		total = total +a;
		number = number / 10;
		printf("%d", a);
	}
	printf("\n"); 
	//printf("total is: %d\n", total);
	return 0;
} 
