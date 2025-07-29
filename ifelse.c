#include <stdio.h>

int main()
{
	int x;
	printf("enter no\n");
	scanf("%d", &x);
	if(x > 0){
		printf("it's positive\n");
	}
	else if(x<0)
	{
		printf("it's negative\n");
	}
	else
	{
		printf("neither negative nor positive\n");
	}
	
	return 0;

} 
