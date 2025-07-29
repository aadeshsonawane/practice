#include <stdio.h> 
#include <stdlib.h>

void add()
{
	int a,b;
	printf("Enter 2 numbers\n");
	scanf("%d%d", &a,&b);
	printf("Aaddition is %d\n", a+b);
}
void sub()
{	
	int a,b;
	printf("Enters 2 numbers\n");
	scanf("%d%d", &a,&b);
	printf("Subtraction is %d\n", a-b);
}
void mul()
{
	int a,b;
	printf("Enter 2 numbers\n");
	scanf("%d%d", &a,&b);
	printf("Multiplication is %d\n", a*b);
}
void Div()
{
	float x,y;
	printf("Enter 2 numbers\n");
	scanf("%f%f", &x,&y);
	printf("Division is %f\n", x/y);
}


int main()

{
	int c;
	printf("Press 1, Addition\n");
	printf("press 2, Subtraction\n");
	printf("press 3, Multiplication\n");
	printf("press 4, Division\n");
	printf("press 5, exit\n");
	
	while(1)
	{
		printf("Enter your choice\n");
		scanf("%d", &c);
	
		switch (c)
		{
			case 1:
				add();
				break;

			case 2:
				sub();
				break;

			case 3:
				mul();
				break;

			case 4:
				Div();
				break;

			case 5:
				exit(0);
	
			default:
				printf("wrong input\n");
		}
	}

	return(0);
}
