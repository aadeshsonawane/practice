#include <stdio.h>

int main()
{
	int t, i;
	printf("Find the tabel of: ");
	scanf("%d", &t);

	for(i=1; i<=10;i++){
		printf("%d\n", t*i);
	}
	return 0;	
}