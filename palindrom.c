#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
	char s[20];
	int l,i;
	printf("Enter the string: ");
	scanf("%s19", s);
	l = strlen(s);
	for(i = 0; i < l/2; i++)
	{
		if(s[i] != s[l - 1 -i])
		{
			printf("its not palindrome\n");
			exit(0);
		}
		
	}
	printf("its palindomer\n");

} 
