#include <stdio.h>

int adesh(int *y)
{
	printf("%d\n",*y);
	*y=8;
	printf("%d\n", *y);
	return 0;

}

int main()
{
	int z = 5;
	adesh(&z);
	printf("%d\n",z);
	printf("%u\n",&z);


	return 0;
} 
