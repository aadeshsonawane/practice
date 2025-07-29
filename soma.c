#include <stdio.h>
#include <unistd.h> 
 
 int main()
 {
 	int num;
    printf("find the area of circle\n");
	printf("enter the redius: ");
	scanf("%d", &num);
 	
    float ans = 3.14*num*num;
    printf("area of circle is: %f\n",ans);
 	
 	return 0;
 	
 }
