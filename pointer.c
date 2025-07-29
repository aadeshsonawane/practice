#include <stdio.h>

int main()
{
	int a,b,c;
	a =65536;
	b =15;
	
	printf("%d\n", a);
	printf("%d\n",&a);
	printf("%d\n", b);
	b =&a;
	printf("%d\n", b);
	return 0;

}
