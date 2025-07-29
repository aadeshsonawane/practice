#include <stdio.h>
#include <string.h>

int main()
{
	char s[20],t;
	int l,i;
	printf("Enter the string: ");
	fgets(s,sizeof(s), stdin);
	l = strlen(s);
	
/*	for(i = 0; i <= l; i++)
	{
		printf("%c",s[l-i]);	
	}
	//puts("\n");
	printf("\n");*/
	
	for(i = 0; i < l/2; i++)
	{
		t = s[i];
		s[i] = s[l-1-i];
		s[l-1-i] = t;
	
	}
	puts(s);
} 
