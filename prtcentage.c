#include <stdio.h>

int main()
{
	int mark[5], i,j,total =0;
	float outof=0;
	printf("enter the best five subject marks\n");
	
	for(i=0; i<5;i++){
		scanf("%d",&mark[i]);
	}
	
	printf("Enter the out of marks\n");
	scanf("%f", &outof);
	
	for(j=0;j<5;j++){
		total = total+mark[j];
	}
	
	float percent = total/outof*100;
	//printf("%f\n", percent);
	
	//if(percent>75)
	
	
	return 0;
	
} 	
