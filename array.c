#include <stdio.h>

int main()
{
	int i,j,total= 0, k = 5;
	int array[k];

	printf("enter the marks\n");
	
	for(i=0;i<k;i++){
		scanf("%d",&array[i]);
	}
	printf("*****************************************************\n");
	
	for(j=0;j<k;j++){
		total = total+array[j];
	
	}
	float ave = total/k;
	printf("%f\n", ave);
		
	return 0;
}