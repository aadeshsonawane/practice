#include <stdio.h>

void linearsearch(int a[],int f)
{
	int j,k;
	for(j = 0; j < 10; j++)
	{
		if(f == a[j])
		{
			printf("number is found on %d\n", j+1);
			k++;
			break;
			
		}
	}
	if(k == 0)
	{
	puts("number is not found\n");
	}



}

int main()
{
	int a[10] , i, f;
	puts("Enter the 10 numbers: ");
	
	for(i = 0; i < 10; i++)
	{
		scanf("%d",&a[i]);
		
	}
	puts("find the numbers");
	scanf("%d", &f);
	linearsearch(a,f);
	
	
} 
