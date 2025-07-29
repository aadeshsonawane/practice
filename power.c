#include <stdio.h>

int main ()
{
	int i, num,p ,s= 1;
	printf("enter the number\n");
	scanf("%d", &num);
	printf("enter the power of number\n");
	scanf("%d", &p);
	for(i=1;i <=p;i++)
	{
		s=s*num;
	}
	printf("result is %d\n", s);
	
	return 0;

} 
