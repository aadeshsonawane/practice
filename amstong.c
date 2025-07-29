#include <aadesh.h>

int main()
{
	int num, a, b, x, c, root;

	printf("Enter the number: ");
	scanf("%d", &num);

	a = num % 10;
	x = num / 10;
	b = x % 10;
	c = x / 10;

	root = (a * a * a) + (b * b * b) + (c * c *c);
	if(root == num)
	{
		printf("it's Armstrong number\n");
	}
	else
	{
		printf("it's not Armstrong number\n");
	}

	return 0;
}
