#include<stdio.h>

int main()
{
	char x;
	printf("********cheack the vowels************\n");
	printf("Enter the character\n");
	scanf("%c",&x);
	
	if(x=='a'|| x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U'){
	
		printf("its vowel\n");
	}
	else {
		printf("it's not vowel\n");
	
	}

	return 0;
} 
