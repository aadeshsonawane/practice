#include <stdio.h>

struct student
{
	int roll;
	int marks;
	char name[10];
	float per;

}; 
int main()
{
	struct student s1;
	//printf("%lu", sizeof(s1));
	int x =7;
	printf("%d  %d  %d  %d  %d",++x, x--,--x, x--,++x);



}
